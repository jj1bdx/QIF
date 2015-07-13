// Copyright (C) 2005-2010 Code Synthesis Tools CC
//
// This program was generated by CodeSynthesis XSD, an XML Schema to
// C++ data binding compiler.
//
// This program is free software; you can redistribute it and/or modify
// it under the terms of the GNU General Public License version 2 as
// published by the Free Software Foundation.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program; if not, write to the Free Software
// Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301 USA
//
// In addition, as a special exception, Code Synthesis Tools CC gives
// permission to link this program with the Xerces-C++ library (or with
// modified versions of Xerces-C++ that use the same license as Xerces-C++),
// and distribute linked combinations including the two. You must obey
// the GNU General Public License version 2 in all respects for all of
// the code used other than Xerces-C++. If you modify this copy of the
// program, you may extend this exception to your version of the program,
// but you are not obligated to do so. If you do not wish to do so, delete
// this exception statement from your version.
//
// Furthermore, Code Synthesis Tools CC makes a special exception for
// the Free/Libre and Open Source Software (FLOSS) which is described
// in the accompanying FLOSSE file.
//

// Begin prologue.
//
//
// End prologue.

#include <xsd/cxx/pre.hxx>

#include "PrimitivesPD.hxx"

namespace xsd
{
  namespace qif2
  {
    // ColorType
    // 


    // ListDouble9Type
    // 


    // Matrix33Type
    // 


    // QuaternionType
    // 

    const QuaternionType::Value_type& QuaternionType::
    Value () const
    {
      return this->Value_.get ();
    }

    QuaternionType::Value_type& QuaternionType::
    Value ()
    {
      return this->Value_.get ();
    }

    void QuaternionType::
    Value (const Value_type& x)
    {
      this->Value_.set (x);
    }

    void QuaternionType::
    Value (::std::auto_ptr< Value_type > x)
    {
      this->Value_.set (x);
    }


    // NodeBaseType
    // 

    const NodeBaseType::label_optional& NodeBaseType::
    label () const
    {
      return this->label_;
    }

    NodeBaseType::label_optional& NodeBaseType::
    label ()
    {
      return this->label_;
    }

    void NodeBaseType::
    label (const label_type& x)
    {
      this->label_.set (x);
    }

    void NodeBaseType::
    label (const label_optional& x)
    {
      this->label_ = x;
    }

    void NodeBaseType::
    label (::std::auto_ptr< label_type > x)
    {
      this->label_.set (x);
    }


    // NodeWithIdBaseType
    // 

    const NodeWithIdBaseType::Attributes_optional& NodeWithIdBaseType::
    Attributes () const
    {
      return this->Attributes_;
    }

    NodeWithIdBaseType::Attributes_optional& NodeWithIdBaseType::
    Attributes ()
    {
      return this->Attributes_;
    }

    void NodeWithIdBaseType::
    Attributes (const Attributes_type& x)
    {
      this->Attributes_.set (x);
    }

    void NodeWithIdBaseType::
    Attributes (const Attributes_optional& x)
    {
      this->Attributes_ = x;
    }

    void NodeWithIdBaseType::
    Attributes (::std::auto_ptr< Attributes_type > x)
    {
      this->Attributes_.set (x);
    }

    const NodeWithIdBaseType::id_type& NodeWithIdBaseType::
    id () const
    {
      return this->id_.get ();
    }

    NodeWithIdBaseType::id_type& NodeWithIdBaseType::
    id ()
    {
      return this->id_.get ();
    }

    void NodeWithIdBaseType::
    id (const id_type& x)
    {
      this->id_.set (x);
    }

    void NodeWithIdBaseType::
    id (::std::auto_ptr< id_type > x)
    {
      this->id_.set (x);
    }


    // DrawableBaseType
    // 

    const DrawableBaseType::color_optional& DrawableBaseType::
    color () const
    {
      return this->color_;
    }

    DrawableBaseType::color_optional& DrawableBaseType::
    color ()
    {
      return this->color_;
    }

    void DrawableBaseType::
    color (const color_type& x)
    {
      this->color_.set (x);
    }

    void DrawableBaseType::
    color (const color_optional& x)
    {
      this->color_ = x;
    }

    void DrawableBaseType::
    color (::std::auto_ptr< color_type > x)
    {
      this->color_.set (x);
    }

    const DrawableBaseType::transparency_type& DrawableBaseType::
    transparency () const
    {
      return this->transparency_.get ();
    }

    DrawableBaseType::transparency_type& DrawableBaseType::
    transparency ()
    {
      return this->transparency_.get ();
    }

    void DrawableBaseType::
    transparency (const transparency_type& x)
    {
      this->transparency_.set (x);
    }

    DrawableBaseType::transparency_type DrawableBaseType::
    transparency_default_value ()
    {
      return transparency_type (.0);
    }

    const DrawableBaseType::hidden_type& DrawableBaseType::
    hidden () const
    {
      return this->hidden_.get ();
    }

    DrawableBaseType::hidden_type& DrawableBaseType::
    hidden ()
    {
      return this->hidden_.get ();
    }

    void DrawableBaseType::
    hidden (const hidden_type& x)
    {
      this->hidden_.set (x);
    }

    DrawableBaseType::hidden_type DrawableBaseType::
    hidden_default_value ()
    {
      return hidden_type (false);
    }

    const DrawableBaseType::size_optional& DrawableBaseType::
    size () const
    {
      return this->size_;
    }

    DrawableBaseType::size_optional& DrawableBaseType::
    size ()
    {
      return this->size_;
    }

    void DrawableBaseType::
    size (const size_type& x)
    {
      this->size_.set (x);
    }

    void DrawableBaseType::
    size (const size_optional& x)
    {
      this->size_ = x;
    }

    void DrawableBaseType::
    size (::std::auto_ptr< size_type > x)
    {
      this->size_.set (x);
    }


    // AuthorType
    // 

    const AuthorType::Name_optional& AuthorType::
    Name () const
    {
      return this->Name_;
    }

    AuthorType::Name_optional& AuthorType::
    Name ()
    {
      return this->Name_;
    }

    void AuthorType::
    Name (const Name_type& x)
    {
      this->Name_.set (x);
    }

    void AuthorType::
    Name (const Name_optional& x)
    {
      this->Name_ = x;
    }

    void AuthorType::
    Name (::std::auto_ptr< Name_type > x)
    {
      this->Name_.set (x);
    }

    const AuthorType::Organization_optional& AuthorType::
    Organization () const
    {
      return this->Organization_;
    }

    AuthorType::Organization_optional& AuthorType::
    Organization ()
    {
      return this->Organization_;
    }

    void AuthorType::
    Organization (const Organization_type& x)
    {
      this->Organization_.set (x);
    }

    void AuthorType::
    Organization (const Organization_optional& x)
    {
      this->Organization_ = x;
    }

    void AuthorType::
    Organization (::std::auto_ptr< Organization_type > x)
    {
      this->Organization_.set (x);
    }


    // ApplicationType
    // 

    const ApplicationType::Name_type& ApplicationType::
    Name () const
    {
      return this->Name_.get ();
    }

    ApplicationType::Name_type& ApplicationType::
    Name ()
    {
      return this->Name_.get ();
    }

    void ApplicationType::
    Name (const Name_type& x)
    {
      this->Name_.set (x);
    }

    void ApplicationType::
    Name (::std::auto_ptr< Name_type > x)
    {
      this->Name_.set (x);
    }

    const ApplicationType::Organization_optional& ApplicationType::
    Organization () const
    {
      return this->Organization_;
    }

    ApplicationType::Organization_optional& ApplicationType::
    Organization ()
    {
      return this->Organization_;
    }

    void ApplicationType::
    Organization (const Organization_type& x)
    {
      this->Organization_.set (x);
    }

    void ApplicationType::
    Organization (const Organization_optional& x)
    {
      this->Organization_ = x;
    }

    void ApplicationType::
    Organization (::std::auto_ptr< Organization_type > x)
    {
      this->Organization_.set (x);
    }

    const ApplicationType::AddonName_optional& ApplicationType::
    AddonName () const
    {
      return this->AddonName_;
    }

    ApplicationType::AddonName_optional& ApplicationType::
    AddonName ()
    {
      return this->AddonName_;
    }

    void ApplicationType::
    AddonName (const AddonName_type& x)
    {
      this->AddonName_.set (x);
    }

    void ApplicationType::
    AddonName (const AddonName_optional& x)
    {
      this->AddonName_ = x;
    }

    void ApplicationType::
    AddonName (::std::auto_ptr< AddonName_type > x)
    {
      this->AddonName_.set (x);
    }

    const ApplicationType::AddonOrganization_optional& ApplicationType::
    AddonOrganization () const
    {
      return this->AddonOrganization_;
    }

    ApplicationType::AddonOrganization_optional& ApplicationType::
    AddonOrganization ()
    {
      return this->AddonOrganization_;
    }

    void ApplicationType::
    AddonOrganization (const AddonOrganization_type& x)
    {
      this->AddonOrganization_.set (x);
    }

    void ApplicationType::
    AddonOrganization (const AddonOrganization_optional& x)
    {
      this->AddonOrganization_ = x;
    }

    void ApplicationType::
    AddonOrganization (::std::auto_ptr< AddonOrganization_type > x)
    {
      this->AddonOrganization_.set (x);
    }
  }
}

#include <xsd/cxx/xml/dom/parsing-source.hxx>

namespace xsd
{
  namespace qif2
  {
    // ColorType
    //

    ColorType::
    ColorType ()
    : ::xsd::qif2::ListIntType ()
    {
    }

    ColorType::
    ColorType (const ::xsd::qif2::ListIntType& _xsd_ListIntType_base)
    : ::xsd::qif2::ListIntType (_xsd_ListIntType_base)
    {
    }

    ColorType::
    ColorType (const ColorType& x,
               ::xml_schema::flags f,
               ::xml_schema::container* c)
    : ::xsd::qif2::ListIntType (x, f, c)
    {
    }

    ColorType::
    ColorType (const ::xercesc::DOMElement& e,
               ::xml_schema::flags f,
               ::xml_schema::container* c)
    : ::xsd::qif2::ListIntType (e, f, c)
    {
    }

    ColorType::
    ColorType (const ::xercesc::DOMAttr& a,
               ::xml_schema::flags f,
               ::xml_schema::container* c)
    : ::xsd::qif2::ListIntType (a, f, c)
    {
    }

    ColorType::
    ColorType (const ::std::string& s,
               const ::xercesc::DOMElement* e,
               ::xml_schema::flags f,
               ::xml_schema::container* c)
    : ::xsd::qif2::ListIntType (s, e, f, c)
    {
    }

    ColorType* ColorType::
    _clone (::xml_schema::flags f,
            ::xml_schema::container* c) const
    {
      return new class ColorType (*this, f, c);
    }

    ColorType::
    ~ColorType ()
    {
    }

    // ListDouble9Type
    //

    ListDouble9Type::
    ListDouble9Type ()
    : ::xsd::qif2::ListDoubleType ()
    {
    }

    ListDouble9Type::
    ListDouble9Type (const ::xsd::qif2::ListDoubleType& _xsd_ListDoubleType_base)
    : ::xsd::qif2::ListDoubleType (_xsd_ListDoubleType_base)
    {
    }

    ListDouble9Type::
    ListDouble9Type (const ListDouble9Type& x,
                     ::xml_schema::flags f,
                     ::xml_schema::container* c)
    : ::xsd::qif2::ListDoubleType (x, f, c)
    {
    }

    ListDouble9Type::
    ListDouble9Type (const ::xercesc::DOMElement& e,
                     ::xml_schema::flags f,
                     ::xml_schema::container* c)
    : ::xsd::qif2::ListDoubleType (e, f, c)
    {
    }

    ListDouble9Type::
    ListDouble9Type (const ::xercesc::DOMAttr& a,
                     ::xml_schema::flags f,
                     ::xml_schema::container* c)
    : ::xsd::qif2::ListDoubleType (a, f, c)
    {
    }

    ListDouble9Type::
    ListDouble9Type (const ::std::string& s,
                     const ::xercesc::DOMElement* e,
                     ::xml_schema::flags f,
                     ::xml_schema::container* c)
    : ::xsd::qif2::ListDoubleType (s, e, f, c)
    {
    }

    ListDouble9Type* ListDouble9Type::
    _clone (::xml_schema::flags f,
            ::xml_schema::container* c) const
    {
      return new class ListDouble9Type (*this, f, c);
    }

    ListDouble9Type::
    ~ListDouble9Type ()
    {
    }

    // Matrix33Type
    //

    Matrix33Type::
    Matrix33Type ()
    : ::xsd::qif2::ListDouble9Type ()
    {
    }

    Matrix33Type::
    Matrix33Type (const ::xsd::qif2::ListDoubleType& _xsd_ListDoubleType_base)
    : ::xsd::qif2::ListDouble9Type (_xsd_ListDoubleType_base)
    {
    }

    Matrix33Type::
    Matrix33Type (const Matrix33Type& x,
                  ::xml_schema::flags f,
                  ::xml_schema::container* c)
    : ::xsd::qif2::ListDouble9Type (x, f, c)
    {
    }

    Matrix33Type::
    Matrix33Type (const ::xercesc::DOMElement& e,
                  ::xml_schema::flags f,
                  ::xml_schema::container* c)
    : ::xsd::qif2::ListDouble9Type (e, f, c)
    {
    }

    Matrix33Type::
    Matrix33Type (const ::xercesc::DOMAttr& a,
                  ::xml_schema::flags f,
                  ::xml_schema::container* c)
    : ::xsd::qif2::ListDouble9Type (a, f, c)
    {
    }

    Matrix33Type::
    Matrix33Type (const ::std::string& s,
                  const ::xercesc::DOMElement* e,
                  ::xml_schema::flags f,
                  ::xml_schema::container* c)
    : ::xsd::qif2::ListDouble9Type (s, e, f, c)
    {
    }

    Matrix33Type* Matrix33Type::
    _clone (::xml_schema::flags f,
            ::xml_schema::container* c) const
    {
      return new class Matrix33Type (*this, f, c);
    }

    Matrix33Type::
    ~Matrix33Type ()
    {
    }

    // QuaternionType
    //

    QuaternionType::
    QuaternionType (const Value_type& Value)
    : ::xml_schema::type (),
      Value_ (Value, ::xml_schema::flags (), this)
    {
    }

    QuaternionType::
    QuaternionType (const QuaternionType& x,
                    ::xml_schema::flags f,
                    ::xml_schema::container* c)
    : ::xml_schema::type (x, f, c),
      Value_ (x.Value_, f, this)
    {
    }

    QuaternionType::
    QuaternionType (const ::xercesc::DOMElement& e,
                    ::xml_schema::flags f,
                    ::xml_schema::container* c)
    : ::xml_schema::type (e, f | ::xml_schema::flags::base, c),
      Value_ (f, this)
    {
      if ((f & ::xml_schema::flags::base) == 0)
      {
        ::xsd::cxx::xml::dom::parser< char > p (e, true, false);
        this->parse (p, f);
      }
    }

    void QuaternionType::
    parse (::xsd::cxx::xml::dom::parser< char >& p,
           ::xml_schema::flags f)
    {
      for (; p.more_elements (); p.next_element ())
      {
        const ::xercesc::DOMElement& i (p.cur_element ());
        const ::xsd::cxx::xml::qualified_name< char > n (
          ::xsd::cxx::xml::dom::name< char > (i));

        // Value
        //
        if (n.name () == "Value" && n.namespace_ () == "http://qifstandards.org/xsd/qif2")
        {
          ::std::auto_ptr< Value_type > r (
            Value_traits::create (i, f, this));

          if (!Value_.present ())
          {
            this->Value_.set (r);
            continue;
          }
        }

        break;
      }

      if (!Value_.present ())
      {
        throw ::xsd::cxx::tree::expected_element< char > (
          "Value",
          "http://qifstandards.org/xsd/qif2");
      }
    }

    QuaternionType* QuaternionType::
    _clone (::xml_schema::flags f,
            ::xml_schema::container* c) const
    {
      return new class QuaternionType (*this, f, c);
    }

    QuaternionType::
    ~QuaternionType ()
    {
    }

    // NodeBaseType
    //

    NodeBaseType::
    NodeBaseType ()
    : ::xml_schema::type (),
      label_ (::xml_schema::flags (), this)
    {
    }

    NodeBaseType::
    NodeBaseType (const NodeBaseType& x,
                  ::xml_schema::flags f,
                  ::xml_schema::container* c)
    : ::xml_schema::type (x, f, c),
      label_ (x.label_, f, this)
    {
    }

    NodeBaseType::
    NodeBaseType (const ::xercesc::DOMElement& e,
                  ::xml_schema::flags f,
                  ::xml_schema::container* c)
    : ::xml_schema::type (e, f | ::xml_schema::flags::base, c),
      label_ (f, this)
    {
      if ((f & ::xml_schema::flags::base) == 0)
      {
        ::xsd::cxx::xml::dom::parser< char > p (e, false, true);
        this->parse (p, f);
      }
    }

    void NodeBaseType::
    parse (::xsd::cxx::xml::dom::parser< char >& p,
           ::xml_schema::flags f)
    {
      while (p.more_attributes ())
      {
        const ::xercesc::DOMAttr& i (p.next_attribute ());
        const ::xsd::cxx::xml::qualified_name< char > n (
          ::xsd::cxx::xml::dom::name< char > (i));

        if (n.name () == "label" && n.namespace_ ().empty ())
        {
          ::std::auto_ptr< label_type > r (
            label_traits::create (i, f, this));

          this->label_.set (r);
          continue;
        }
      }
    }

    NodeBaseType* NodeBaseType::
    _clone (::xml_schema::flags f,
            ::xml_schema::container* c) const
    {
      return new class NodeBaseType (*this, f, c);
    }

    NodeBaseType::
    ~NodeBaseType ()
    {
    }

    // NodeWithIdBaseType
    //

    NodeWithIdBaseType::
    NodeWithIdBaseType (const id_type& id)
    : ::xsd::qif2::NodeBaseType (),
      Attributes_ (::xml_schema::flags (), this),
      id_ (id, ::xml_schema::flags (), this)
    {
    }

    NodeWithIdBaseType::
    NodeWithIdBaseType (const NodeWithIdBaseType& x,
                        ::xml_schema::flags f,
                        ::xml_schema::container* c)
    : ::xsd::qif2::NodeBaseType (x, f, c),
      Attributes_ (x.Attributes_, f, this),
      id_ (x.id_, f, this)
    {
    }

    NodeWithIdBaseType::
    NodeWithIdBaseType (const ::xercesc::DOMElement& e,
                        ::xml_schema::flags f,
                        ::xml_schema::container* c)
    : ::xsd::qif2::NodeBaseType (e, f | ::xml_schema::flags::base, c),
      Attributes_ (f, this),
      id_ (f, this)
    {
      if ((f & ::xml_schema::flags::base) == 0)
      {
        ::xsd::cxx::xml::dom::parser< char > p (e, true, true);
        this->parse (p, f);
      }
    }

    void NodeWithIdBaseType::
    parse (::xsd::cxx::xml::dom::parser< char >& p,
           ::xml_schema::flags f)
    {
      this->::xsd::qif2::NodeBaseType::parse (p, f);

      for (; p.more_elements (); p.next_element ())
      {
        const ::xercesc::DOMElement& i (p.cur_element ());
        const ::xsd::cxx::xml::qualified_name< char > n (
          ::xsd::cxx::xml::dom::name< char > (i));

        // Attributes
        //
        if (n.name () == "Attributes" && n.namespace_ () == "http://qifstandards.org/xsd/qif2")
        {
          ::std::auto_ptr< Attributes_type > r (
            Attributes_traits::create (i, f, this));

          if (!this->Attributes_)
          {
            this->Attributes_.set (r);
            continue;
          }
        }

        break;
      }

      p.reset_attributes ();

      while (p.more_attributes ())
      {
        const ::xercesc::DOMAttr& i (p.next_attribute ());
        const ::xsd::cxx::xml::qualified_name< char > n (
          ::xsd::cxx::xml::dom::name< char > (i));

        if (n.name () == "id" && n.namespace_ ().empty ())
        {
          ::std::auto_ptr< id_type > r (
            id_traits::create (i, f, this));

          this->id_.set (r);
          continue;
        }
      }

      if (!id_.present ())
      {
        throw ::xsd::cxx::tree::expected_attribute< char > (
          "id",
          "");
      }
    }

    NodeWithIdBaseType* NodeWithIdBaseType::
    _clone (::xml_schema::flags f,
            ::xml_schema::container* c) const
    {
      return new class NodeWithIdBaseType (*this, f, c);
    }

    NodeWithIdBaseType::
    ~NodeWithIdBaseType ()
    {
    }

    // DrawableBaseType
    //

    DrawableBaseType::
    DrawableBaseType (const id_type& id)
    : ::xsd::qif2::NodeWithIdBaseType (id),
      color_ (::xml_schema::flags (), this),
      transparency_ (transparency_default_value (), ::xml_schema::flags (), this),
      hidden_ (hidden_default_value (), ::xml_schema::flags (), this),
      size_ (::xml_schema::flags (), this)
    {
    }

    DrawableBaseType::
    DrawableBaseType (const DrawableBaseType& x,
                      ::xml_schema::flags f,
                      ::xml_schema::container* c)
    : ::xsd::qif2::NodeWithIdBaseType (x, f, c),
      color_ (x.color_, f, this),
      transparency_ (x.transparency_, f, this),
      hidden_ (x.hidden_, f, this),
      size_ (x.size_, f, this)
    {
    }

    DrawableBaseType::
    DrawableBaseType (const ::xercesc::DOMElement& e,
                      ::xml_schema::flags f,
                      ::xml_schema::container* c)
    : ::xsd::qif2::NodeWithIdBaseType (e, f | ::xml_schema::flags::base, c),
      color_ (f, this),
      transparency_ (f, this),
      hidden_ (f, this),
      size_ (f, this)
    {
      if ((f & ::xml_schema::flags::base) == 0)
      {
        ::xsd::cxx::xml::dom::parser< char > p (e, true, true);
        this->parse (p, f);
      }
    }

    void DrawableBaseType::
    parse (::xsd::cxx::xml::dom::parser< char >& p,
           ::xml_schema::flags f)
    {
      this->::xsd::qif2::NodeWithIdBaseType::parse (p, f);

      p.reset_attributes ();

      while (p.more_attributes ())
      {
        const ::xercesc::DOMAttr& i (p.next_attribute ());
        const ::xsd::cxx::xml::qualified_name< char > n (
          ::xsd::cxx::xml::dom::name< char > (i));

        if (n.name () == "color" && n.namespace_ ().empty ())
        {
          ::std::auto_ptr< color_type > r (
            color_traits::create (i, f, this));

          this->color_.set (r);
          continue;
        }

        if (n.name () == "transparency" && n.namespace_ ().empty ())
        {
          this->transparency_.set (transparency_traits::create (i, f, this));
          continue;
        }

        if (n.name () == "hidden" && n.namespace_ ().empty ())
        {
          this->hidden_.set (hidden_traits::create (i, f, this));
          continue;
        }

        if (n.name () == "size" && n.namespace_ ().empty ())
        {
          ::std::auto_ptr< size_type > r (
            size_traits::create (i, f, this));

          this->size_.set (r);
          continue;
        }
      }

      if (!transparency_.present ())
      {
        this->transparency_.set (transparency_default_value ());
      }

      if (!hidden_.present ())
      {
        this->hidden_.set (hidden_default_value ());
      }
    }

    DrawableBaseType* DrawableBaseType::
    _clone (::xml_schema::flags f,
            ::xml_schema::container* c) const
    {
      return new class DrawableBaseType (*this, f, c);
    }

    DrawableBaseType::
    ~DrawableBaseType ()
    {
    }

    // AuthorType
    //

    AuthorType::
    AuthorType ()
    : ::xml_schema::type (),
      Name_ (::xml_schema::flags (), this),
      Organization_ (::xml_schema::flags (), this)
    {
    }

    AuthorType::
    AuthorType (const AuthorType& x,
                ::xml_schema::flags f,
                ::xml_schema::container* c)
    : ::xml_schema::type (x, f, c),
      Name_ (x.Name_, f, this),
      Organization_ (x.Organization_, f, this)
    {
    }

    AuthorType::
    AuthorType (const ::xercesc::DOMElement& e,
                ::xml_schema::flags f,
                ::xml_schema::container* c)
    : ::xml_schema::type (e, f | ::xml_schema::flags::base, c),
      Name_ (f, this),
      Organization_ (f, this)
    {
      if ((f & ::xml_schema::flags::base) == 0)
      {
        ::xsd::cxx::xml::dom::parser< char > p (e, true, false);
        this->parse (p, f);
      }
    }

    void AuthorType::
    parse (::xsd::cxx::xml::dom::parser< char >& p,
           ::xml_schema::flags f)
    {
      for (; p.more_elements (); p.next_element ())
      {
        const ::xercesc::DOMElement& i (p.cur_element ());
        const ::xsd::cxx::xml::qualified_name< char > n (
          ::xsd::cxx::xml::dom::name< char > (i));

        // Name
        //
        if (n.name () == "Name" && n.namespace_ () == "http://qifstandards.org/xsd/qif2")
        {
          ::std::auto_ptr< Name_type > r (
            Name_traits::create (i, f, this));

          if (!this->Name_)
          {
            this->Name_.set (r);
            continue;
          }
        }

        // Organization
        //
        if (n.name () == "Organization" && n.namespace_ () == "http://qifstandards.org/xsd/qif2")
        {
          ::std::auto_ptr< Organization_type > r (
            Organization_traits::create (i, f, this));

          if (!this->Organization_)
          {
            this->Organization_.set (r);
            continue;
          }
        }

        break;
      }
    }

    AuthorType* AuthorType::
    _clone (::xml_schema::flags f,
            ::xml_schema::container* c) const
    {
      return new class AuthorType (*this, f, c);
    }

    AuthorType::
    ~AuthorType ()
    {
    }

    // ApplicationType
    //

    ApplicationType::
    ApplicationType (const Name_type& Name)
    : ::xml_schema::type (),
      Name_ (Name, ::xml_schema::flags (), this),
      Organization_ (::xml_schema::flags (), this),
      AddonName_ (::xml_schema::flags (), this),
      AddonOrganization_ (::xml_schema::flags (), this)
    {
    }

    ApplicationType::
    ApplicationType (const ApplicationType& x,
                     ::xml_schema::flags f,
                     ::xml_schema::container* c)
    : ::xml_schema::type (x, f, c),
      Name_ (x.Name_, f, this),
      Organization_ (x.Organization_, f, this),
      AddonName_ (x.AddonName_, f, this),
      AddonOrganization_ (x.AddonOrganization_, f, this)
    {
    }

    ApplicationType::
    ApplicationType (const ::xercesc::DOMElement& e,
                     ::xml_schema::flags f,
                     ::xml_schema::container* c)
    : ::xml_schema::type (e, f | ::xml_schema::flags::base, c),
      Name_ (f, this),
      Organization_ (f, this),
      AddonName_ (f, this),
      AddonOrganization_ (f, this)
    {
      if ((f & ::xml_schema::flags::base) == 0)
      {
        ::xsd::cxx::xml::dom::parser< char > p (e, true, false);
        this->parse (p, f);
      }
    }

    void ApplicationType::
    parse (::xsd::cxx::xml::dom::parser< char >& p,
           ::xml_schema::flags f)
    {
      for (; p.more_elements (); p.next_element ())
      {
        const ::xercesc::DOMElement& i (p.cur_element ());
        const ::xsd::cxx::xml::qualified_name< char > n (
          ::xsd::cxx::xml::dom::name< char > (i));

        // Name
        //
        if (n.name () == "Name" && n.namespace_ () == "http://qifstandards.org/xsd/qif2")
        {
          ::std::auto_ptr< Name_type > r (
            Name_traits::create (i, f, this));

          if (!Name_.present ())
          {
            this->Name_.set (r);
            continue;
          }
        }

        // Organization
        //
        if (n.name () == "Organization" && n.namespace_ () == "http://qifstandards.org/xsd/qif2")
        {
          ::std::auto_ptr< Organization_type > r (
            Organization_traits::create (i, f, this));

          if (!this->Organization_)
          {
            this->Organization_.set (r);
            continue;
          }
        }

        // AddonName
        //
        if (n.name () == "AddonName" && n.namespace_ () == "http://qifstandards.org/xsd/qif2")
        {
          ::std::auto_ptr< AddonName_type > r (
            AddonName_traits::create (i, f, this));

          if (!this->AddonName_)
          {
            this->AddonName_.set (r);
            continue;
          }
        }

        // AddonOrganization
        //
        if (n.name () == "AddonOrganization" && n.namespace_ () == "http://qifstandards.org/xsd/qif2")
        {
          ::std::auto_ptr< AddonOrganization_type > r (
            AddonOrganization_traits::create (i, f, this));

          if (!this->AddonOrganization_)
          {
            this->AddonOrganization_.set (r);
            continue;
          }
        }

        break;
      }

      if (!Name_.present ())
      {
        throw ::xsd::cxx::tree::expected_element< char > (
          "Name",
          "http://qifstandards.org/xsd/qif2");
      }
    }

    ApplicationType* ApplicationType::
    _clone (::xml_schema::flags f,
            ::xml_schema::container* c) const
    {
      return new class ApplicationType (*this, f, c);
    }

    ApplicationType::
    ~ApplicationType ()
    {
    }
  }
}

#include <istream>
#include <xsd/cxx/xml/sax/std-input-source.hxx>
#include <xsd/cxx/tree/error-handler.hxx>

namespace xsd
{
  namespace qif2
  {
  }
}

#include <xsd/cxx/post.hxx>

// Begin epilogue.
//
//
// End epilogue.
