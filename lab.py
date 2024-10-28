balance_amount=1000
while True:
    print("\n1.\tCheck Balance")
    print("2.\tDeposit Money")
    print("3.\tWithdraw Money")
    print("4.\tExit")
    choice=int(input("enter your choice"))
    if choice==1:
        print(f"The current balance $ {balance_amount}")
    elif choice==2:
        deposit_money=float(input("enter the deposited money"))
        balance_amount+=deposit_money
        print(f"the deposited amount ${deposit_money} and" f"the current balance ${balance_amount}")
    elif choice==3:
        withdraw_money=float(input("enter the amount withdraw"))
        if withdraw_money<=balance_amount:
            balance_amount -= withdraw_money
            print(f"the amount withdraw from the account $ {withdraw_money} and" f"the balance amount ${balance_amount}")

        else:
            print("insufficient balance")



    elif choice==4:
        break
    else:
        print("Invalid Entry")