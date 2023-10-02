from datetime import datetime


def select_date():
    date = input("Please enter a date (YYYY-MM-DD): ")
    try:
        selected_date = datetime.strptime(date, "%Y-%m-%d")
        print("You have selected:", selected_date.strftime("%B %d, %Y"))
        # Add your back-end logic here
        # For example, you can store the selected date in a database or perform further processing
    except ValueError:
        print("Invalid date format. Please try again.")


select_date()
