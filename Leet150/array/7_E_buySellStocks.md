Function to calculate the maximum profit from a list of stock prices.
You can complete as many transactions as needed, but only one transaction (buy one and sell one share of the stock) is allowed at a time.
The goal is to find the maximum profit from buying and selling stock on different days.

Time Complexity: O(n)
- I traverse the prices array once, where n is the number of days (length of the prices array).

Space Complexity: O(1)
- The algorithm uses constant extra space as I only store a few variables (buy price and maxProfit).

Parameters:
- prices - A vector of integers representing the price of a stock on different days.

Approach:
- I initialize `buy` with the price on the first day and `maxProfit` as 0.
- For each day starting from the second, I check if the current price is lower than the current `buy` price.
  - If it is, I update `buy` to the current price (since it's more profitable to buy at a lower price).
- I calculate the profit for each day by subtracting the current `buy` price from the current day's price.
- I update `maxProfit` if the current profit is greater than the previously recorded `maxProfit`.
- After iterating through the entire array, `maxProfit` will contain the highest possible profit.

```cpp
int maxProfit(vector<int>& prices) {
    // Initialize maxProfit to 0, as no profit can be made initially
    int maxProfit = 0;

    // Initialize 'buy' with the price on the first day
    int buy = prices[0];

    // Iterate through the prices starting from the second day
    for(int i = 1; i < prices.size(); i++) {
        // If the current price is lower than the 'buy' price, update 'buy'
        if(buy > prices[i]) {
            buy = prices[i];  // Update the buy price to the lower price
        }

        // Calculate the potential profit if sold today, and update maxProfit if it's higher
        maxProfit = max(maxProfit, prices[i] - buy);
    }

    // Return the maximum profit found
    return maxProfit;
}
