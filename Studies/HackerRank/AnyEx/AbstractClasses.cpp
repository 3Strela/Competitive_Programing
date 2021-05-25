// Write your MyBook class here
class MyBook : public Book{
    
    public:
        int pp;
    //   Class Constructor
    //   
    //   Parameters:
    //   title - The book's title.
    //   author - The book's author.
    //   price - The book's price.
    //
    // Write your constructor here
        MyBook(string tl, string at, int price) : Book(tl, at), pp(price)
        {
            tl = title, at = author, pp = price; 
        }
    
    //   Function Name: display
    //   Print the title, author, and price in the specified format.
    //
    // Write your method here
        void display()
        {
            cout << "Title: " << title << "\n";
            cout << "Author: " << author << "\n";
            cout << "Price: " << pp << "\n";
        }
// End class
};