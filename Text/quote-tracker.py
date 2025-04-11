import yfinance as yf

ticker_symbol = input("Enter the ticker symbol: ")
try:
    ticker = yf.Ticker(ticker_symbol)
    print(ticker.info["longName"] + ": " + str(ticker.info.get("currentPrice", "Price not available")))
except Exception as e:
    print("Invalid ticker symbol or unable to fetch data.")
    print(e)
    

