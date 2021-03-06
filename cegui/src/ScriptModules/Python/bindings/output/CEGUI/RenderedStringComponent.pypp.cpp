// This file has been generated by Py++.

#include "boost/python.hpp"
#include "generators/include/python_CEGUI.h"
#include "RenderedStringComponent.pypp.hpp"

namespace bp = boost::python;

struct RenderedStringComponent_wrapper : CEGUI::RenderedStringComponent, bp::wrapper< CEGUI::RenderedStringComponent > {

    RenderedStringComponent_wrapper( )
    : CEGUI::RenderedStringComponent( )
      , bp::wrapper< CEGUI::RenderedStringComponent >(){
        // null constructor
    
    }

    virtual bool canSplit(  ) const {
        bp::override func_canSplit = this->get_override( "canSplit" );
        return func_canSplit(  );
    }

    virtual ::CEGUI::RenderedStringComponent * clone(  ) const {
        bp::override func_clone = this->get_override( "clone" );
        return func_clone(  );
    }

    virtual void draw( ::CEGUI::Window const * ref_wnd, ::CEGUI::GeometryBuffer & buffer, ::CEGUI::Vector2f const & position, ::CEGUI::ColourRect const * mod_colours, ::CEGUI::Rectf const * clip_rect, float const vertical_space, float const space_extra ) const {
        bp::override func_draw = this->get_override( "draw" );
        func_draw( boost::python::ptr(ref_wnd), boost::ref(buffer), boost::ref(position), boost::python::ptr(mod_colours), boost::python::ptr(clip_rect), vertical_space, space_extra );
    }

    virtual ::CEGUI::Sizef getPixelSize( ::CEGUI::Window const * ref_wnd ) const {
        bp::override func_getPixelSize = this->get_override( "getPixelSize" );
        return func_getPixelSize( boost::python::ptr(ref_wnd) );
    }

    virtual ::size_t getSpaceCount(  ) const {
        bp::override func_getSpaceCount = this->get_override( "getSpaceCount" );
        return func_getSpaceCount(  );
    }

    virtual void setSelection( ::CEGUI::Window const * ref_wnd, float const start, float const end ){
        bp::override func_setSelection = this->get_override( "setSelection" );
        func_setSelection( boost::python::ptr(ref_wnd), start, end );
    }

    virtual ::CEGUI::RenderedStringComponent * split( ::CEGUI::Window const * ref_wnd, float split_point, bool first_component ){
        bp::override func_split = this->get_override( "split" );
        return func_split( boost::python::ptr(ref_wnd), split_point, first_component );
    }

};

void register_RenderedStringComponent_class(){

    { //::CEGUI::RenderedStringComponent
        typedef bp::class_< RenderedStringComponent_wrapper, boost::noncopyable > RenderedStringComponent_exposer_t;
        RenderedStringComponent_exposer_t RenderedStringComponent_exposer = RenderedStringComponent_exposer_t( "RenderedStringComponent", bp::no_init );
        bp::scope RenderedStringComponent_scope( RenderedStringComponent_exposer );
        RenderedStringComponent_exposer.def( bp::init< >("! Protected constructor.\n") );
        { //::CEGUI::RenderedStringComponent::canSplit
        
            typedef bool ( ::CEGUI::RenderedStringComponent::*canSplit_function_type )(  ) const;
            
            RenderedStringComponent_exposer.def( 
                "canSplit"
                , bp::pure_virtual( canSplit_function_type(&::CEGUI::RenderedStringComponent::canSplit) )
                , "! return whether the component can be split\n" );
        
        }
        { //::CEGUI::RenderedStringComponent::clone
        
            typedef ::CEGUI::RenderedStringComponent * ( ::CEGUI::RenderedStringComponent::*clone_function_type )(  ) const;
            
            RenderedStringComponent_exposer.def( 
                "clone"
                , bp::pure_virtual( clone_function_type(&::CEGUI::RenderedStringComponent::clone) )
                , bp::return_value_policy< bp::reference_existing_object >()
                , "! clone this component.\n" );
        
        }
        { //::CEGUI::RenderedStringComponent::draw
        
            typedef void ( ::CEGUI::RenderedStringComponent::*draw_function_type )( ::CEGUI::Window const *,::CEGUI::GeometryBuffer &,::CEGUI::Vector2f const &,::CEGUI::ColourRect const *,::CEGUI::Rectf const *,float const,float const ) const;
            
            RenderedStringComponent_exposer.def( 
                "draw"
                , bp::pure_virtual( draw_function_type(&::CEGUI::RenderedStringComponent::draw) )
                , ( bp::arg("ref_wnd"), bp::arg("buffer"), bp::arg("position"), bp::arg("mod_colours"), bp::arg("clip_rect"), bp::arg("vertical_space"), bp::arg("space_extra") ) );
        
        }
        { //::CEGUI::RenderedStringComponent::getAspectLock
        
            typedef bool ( ::CEGUI::RenderedStringComponent::*getAspectLock_function_type )(  ) const;
            
            RenderedStringComponent_exposer.def( 
                "getAspectLock"
                , getAspectLock_function_type( &::CEGUI::RenderedStringComponent::getAspectLock )
                , "! set the aspect-lock state\n\
            ! return the aspect-lock state\n" );
        
        }
        { //::CEGUI::RenderedStringComponent::getBottomPadding
        
            typedef float ( ::CEGUI::RenderedStringComponent::*getBottomPadding_function_type )(  ) const;
            
            RenderedStringComponent_exposer.def( 
                "getBottomPadding"
                , getBottomPadding_function_type( &::CEGUI::RenderedStringComponent::getBottomPadding )
                , "! return the top padding value.\n\
            ! return the bottom padding value.\n" );
        
        }
        { //::CEGUI::RenderedStringComponent::getLeftPadding
        
            typedef float ( ::CEGUI::RenderedStringComponent::*getLeftPadding_function_type )(  ) const;
            
            RenderedStringComponent_exposer.def( 
                "getLeftPadding"
                , getLeftPadding_function_type( &::CEGUI::RenderedStringComponent::getLeftPadding )
                , "! return the current padding value Rect.\n\
            ! return the left padding value.\n" );
        
        }
        { //::CEGUI::RenderedStringComponent::getPadding
        
            typedef ::CEGUI::Rectf const & ( ::CEGUI::RenderedStringComponent::*getPadding_function_type )(  ) const;
            
            RenderedStringComponent_exposer.def( 
                "getPadding"
                , getPadding_function_type( &::CEGUI::RenderedStringComponent::getPadding )
                , bp::return_value_policy< bp::copy_const_reference >()
                , "! set the Bottom padding value.\n\
            ! return the current padding value Rect.\n" );
        
        }
        { //::CEGUI::RenderedStringComponent::getPixelSize
        
            typedef ::CEGUI::Sizef ( ::CEGUI::RenderedStringComponent::*getPixelSize_function_type )( ::CEGUI::Window const * ) const;
            
            RenderedStringComponent_exposer.def( 
                "getPixelSize"
                , bp::pure_virtual( getPixelSize_function_type(&::CEGUI::RenderedStringComponent::getPixelSize) )
                , ( bp::arg("ref_wnd") )
                , "! return the pixel size of the rendered component.\n" );
        
        }
        { //::CEGUI::RenderedStringComponent::getRightPadding
        
            typedef float ( ::CEGUI::RenderedStringComponent::*getRightPadding_function_type )(  ) const;
            
            RenderedStringComponent_exposer.def( 
                "getRightPadding"
                , getRightPadding_function_type( &::CEGUI::RenderedStringComponent::getRightPadding )
                , "! return the left padding value.\n\
            ! return the right padding value.\n" );
        
        }
        { //::CEGUI::RenderedStringComponent::getSpaceCount
        
            typedef ::size_t ( ::CEGUI::RenderedStringComponent::*getSpaceCount_function_type )(  ) const;
            
            RenderedStringComponent_exposer.def( 
                "getSpaceCount"
                , bp::pure_virtual( getSpaceCount_function_type(&::CEGUI::RenderedStringComponent::getSpaceCount) )
                , "! return the total number of spacing characters in the string.\n" );
        
        }
        { //::CEGUI::RenderedStringComponent::getTopPadding
        
            typedef float ( ::CEGUI::RenderedStringComponent::*getTopPadding_function_type )(  ) const;
            
            RenderedStringComponent_exposer.def( 
                "getTopPadding"
                , getTopPadding_function_type( &::CEGUI::RenderedStringComponent::getTopPadding )
                , "! return the right padding value.\n\
            ! return the top padding value.\n" );
        
        }
        { //::CEGUI::RenderedStringComponent::getVerticalFormatting
        
            typedef ::CEGUI::VerticalFormatting ( ::CEGUI::RenderedStringComponent::*getVerticalFormatting_function_type )(  ) const;
            
            RenderedStringComponent_exposer.def( 
                "getVerticalFormatting"
                , getVerticalFormatting_function_type( &::CEGUI::RenderedStringComponent::getVerticalFormatting )
                , "! Set the VerticalFormatting option for this component.\n\
            ! return the current VerticalFormatting option.\n" );
        
        }
        { //::CEGUI::RenderedStringComponent::setAspectLock
        
            typedef void ( ::CEGUI::RenderedStringComponent::*setAspectLock_function_type )( bool const ) ;
            
            RenderedStringComponent_exposer.def( 
                "setAspectLock"
                , setAspectLock_function_type( &::CEGUI::RenderedStringComponent::setAspectLock )
                , ( bp::arg("setting") )
                , "! return the bottom padding value.\n\
            ! set the aspect-lock state\n" );
        
        }
        { //::CEGUI::RenderedStringComponent::setBottomPadding
        
            typedef void ( ::CEGUI::RenderedStringComponent::*setBottomPadding_function_type )( float const ) ;
            
            RenderedStringComponent_exposer.def( 
                "setBottomPadding"
                , setBottomPadding_function_type( &::CEGUI::RenderedStringComponent::setBottomPadding )
                , ( bp::arg("padding") )
                , "! set the top padding value.\n\
            ! set the Bottom padding value.\n" );
        
        }
        { //::CEGUI::RenderedStringComponent::setLeftPadding
        
            typedef void ( ::CEGUI::RenderedStringComponent::*setLeftPadding_function_type )( float const ) ;
            
            RenderedStringComponent_exposer.def( 
                "setLeftPadding"
                , setLeftPadding_function_type( &::CEGUI::RenderedStringComponent::setLeftPadding )
                , ( bp::arg("padding") )
                , "! set the padding values.\n\
            ! set the left padding value.\n" );
        
        }
        { //::CEGUI::RenderedStringComponent::setPadding
        
            typedef void ( ::CEGUI::RenderedStringComponent::*setPadding_function_type )( ::CEGUI::Rectf const & ) ;
            
            RenderedStringComponent_exposer.def( 
                "setPadding"
                , setPadding_function_type( &::CEGUI::RenderedStringComponent::setPadding )
                , ( bp::arg("padding") )
                , "! return the current VerticalFormatting option.\n\
            ! set the padding values.\n" );
        
        }
        { //::CEGUI::RenderedStringComponent::setRightPadding
        
            typedef void ( ::CEGUI::RenderedStringComponent::*setRightPadding_function_type )( float const ) ;
            
            RenderedStringComponent_exposer.def( 
                "setRightPadding"
                , setRightPadding_function_type( &::CEGUI::RenderedStringComponent::setRightPadding )
                , ( bp::arg("padding") )
                , "! set the left padding value.\n\
            ! set the right padding value.\n" );
        
        }
        { //::CEGUI::RenderedStringComponent::setSelection
        
            typedef void ( ::CEGUI::RenderedStringComponent::*setSelection_function_type )( ::CEGUI::Window const *,float const,float const ) ;
            
            RenderedStringComponent_exposer.def( 
                "setSelection"
                , bp::pure_virtual( setSelection_function_type(&::CEGUI::RenderedStringComponent::setSelection) )
                , ( bp::arg("ref_wnd"), bp::arg("start"), bp::arg("end") )
                , "! mark some region appropriate given a start and a end as selected.\n" );
        
        }
        { //::CEGUI::RenderedStringComponent::setTopPadding
        
            typedef void ( ::CEGUI::RenderedStringComponent::*setTopPadding_function_type )( float const ) ;
            
            RenderedStringComponent_exposer.def( 
                "setTopPadding"
                , setTopPadding_function_type( &::CEGUI::RenderedStringComponent::setTopPadding )
                , ( bp::arg("padding") )
                , "! set the right padding value.\n\
            ! set the top padding value.\n" );
        
        }
        { //::CEGUI::RenderedStringComponent::setVerticalFormatting
        
            typedef void ( ::CEGUI::RenderedStringComponent::*setVerticalFormatting_function_type )( ::CEGUI::VerticalFormatting ) ;
            
            RenderedStringComponent_exposer.def( 
                "setVerticalFormatting"
                , setVerticalFormatting_function_type( &::CEGUI::RenderedStringComponent::setVerticalFormatting )
                , ( bp::arg("fmt") )
                , "! Set the VerticalFormatting option for this component.\n" );
        
        }
        { //::CEGUI::RenderedStringComponent::split
        
            typedef ::CEGUI::RenderedStringComponent * ( ::CEGUI::RenderedStringComponent::*split_function_type )( ::CEGUI::Window const *,float,bool ) ;
            
            RenderedStringComponent_exposer.def( 
                "split"
                , bp::pure_virtual( split_function_type(&::CEGUI::RenderedStringComponent::split) )
                , ( bp::arg("ref_wnd"), bp::arg("split_point"), bp::arg("first_component") )
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
    }

}
