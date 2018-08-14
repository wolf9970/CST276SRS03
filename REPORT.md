# CST276SRS02  

Date Validation Strategy/Template Method  

Name: <John Kaye>

---
Issues:  


Notes:  

Implemented GoF Factory Pattern and Composite Pattern


Composite Pattern: I deviated from the UML diagram on pg 164 of GoF. I had a hard time understanding why the Component
                   interface contained functions that the Leaf class should not be defining (Add, Remove, GetChild).
                   I instead included only Operation in the interface since both subclasses utilize that function.
                   I defined Add, Remove, and GetChild in the Composite class. GoF talks about this on pg 167 section 4.
                   "The decision involves a trade-off between safety and transparency". They chose transparency in their
                   implementation.

CompositeFactory is not completed roughed out a basic skeleton but have not finished implementation.


###

