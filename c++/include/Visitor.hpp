#ifndef __VISITOR_HPP__
#define __VISITOR_HPP__

#include <string>

#include "model/Html.hpp"

class HtmlVisitor
{
   public:
       HtmlVisitor() {};
       virtual void visit (HtmlElement* e __attribute__((unused)))  {};
       virtual void visit (Body* e __attribute__((unused))) {};
       virtual void visit (Head* e __attribute__((unused))) {};
       virtual void visit (P* e __attribute__((unused))) {};
       virtual void visit (Title* e __attribute__((unused))) {};
       virtual void visit (Document* e __attribute__((unused))) {};
};


class PrinterVisitor : public HtmlVisitor
{
   public:
       PrinterVisitor() {};
       virtual void visit (HtmlElement* e);
       virtual void visit (Body* e);
       virtual void visit (Head* e);
       virtual void visit (P* e);
       virtual void visit (Title* e);
       virtual void visit (Document* e);
       std::string getText() {return _result;};
    private:
       std::string _result;
};



class TextOnlyVisitor : public HtmlVisitor
{
   public:
       TextOnlyVisitor() {};
       virtual void visit (HtmlElement* e);
       virtual void visit (Body* e);
       virtual void visit (Head* e);
       virtual void visit (P* e);
       virtual void visit (Title* e);
       virtual void visit (Document* e);
       std::string getText() {return _result;};
    private:
       std::string _result;

};


#endif

