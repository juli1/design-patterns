#ifndef __HTML_HPP__
#define __HTML_HPP__

#include <list>
#include <string>

class HtmlElement
{
    public:
        HtmlElement (){};
};

class Title : public HtmlElement
{
    public:
        Title(std::string name) {_name = name;};
        std::string getName () { return this->_name;};
    private:
        std::string _name;
};

class P : public HtmlElement
{
   public:
       P();
       P(std::string t){_text = t;};
       std::string getText() {return this->_text;};
       void setText (std::string s){_text = s;};
   private:
       std::string _text;
};


class Head : public HtmlElement
{
   public:
       Head() {};
       Title* getTitle () {return this->_title;};
       void setTitle(Title* t){_title = t;};
   private:
       Title* _title;
};

class Body : public HtmlElement
{
   public:
       Body() {};
       std::list<HtmlElement*> getHtmlElements() {return this->_elements;};
       void addHtmlElement (HtmlElement* e) {this->_elements.push_back(e);};
   private:
       std::list<HtmlElement*> _elements;
};

class Document : public HtmlElement
{
    public:
        Document (Head* h, Body* b){_head = h ; _body = b;};
        Head* getHead () {return _head;};
        Body* getBody () {return _body;};
    private:
        Head* _head;
        Body* _body;
};



#endif

