//Copyright David Abrahams 2002.Permission to copy,use,
//modify,sell and distribute this software is granted provided this
//copyright notice appears in all copies.This software is provided
//"as is" without express or implied warranty,and with no claim as
//to its suitability for any purpose.
#ifndef RETURNING_VOID_DWA2002410_HPP
#define RETURNING_VOID_DWA2002410_HPP

template<class P,class A0>static PyObject*call( R( A0::*pmf )( ),PyObject*args_,PyObject*,P const*policies) 
{
    from_python<A0*>c0(PyTuple_GET_ITEM(args_,0));
    if (!c0.convertible()) return 0;
    if (!policies->precall(args_)) return 0;
    ((c0(PyTuple_GET_ITEM(args_,0)))->*pmf)( );
    return policies->postcall(args_,detail::none());
}
template<class P,class A0,class A1>static PyObject*call( R( A0::*pmf )( A1 ),PyObject*args_,PyObject*,P const*policies) 
{
    from_python<A0*>c0(PyTuple_GET_ITEM(args_,0));
    if (!c0.convertible()) return 0;
    from_python<A1>c1 (PyTuple_GET_ITEM(args_,1 ));
    if (!c1.convertible()) return 0;
    if (!policies->precall(args_)) return 0;
    ((c0(PyTuple_GET_ITEM(args_,0)))->*pmf)( c1 (PyTuple_GET_ITEM(args_,1 )) );
    return policies->postcall(args_,detail::none());
}
template<class P,class A0,class A1,class A2>static PyObject*call( R( A0::*pmf )( A1,A2 ),PyObject*args_,PyObject*,P const*policies) 
{
    from_python<A0*>c0(PyTuple_GET_ITEM(args_,0));
    if (!c0.convertible()) return 0;
    from_python<A1>c1 (PyTuple_GET_ITEM(args_,1 ));
    if (!c1.convertible()) return 0;
    from_python<A2>c2 (PyTuple_GET_ITEM(args_,2 ));
    if (!c2.convertible()) return 0;
    if (!policies->precall(args_)) return 0;
    ((c0(PyTuple_GET_ITEM(args_,0)))->*pmf)( c1 (PyTuple_GET_ITEM(args_,1 )),c2 (PyTuple_GET_ITEM(args_,2 )) );
    return policies->postcall(args_,detail::none());
}
template<class P,class A0,class A1,class A2,class A3>static PyObject*call( R( A0::*pmf )( A1,A2,A3 ),PyObject*args_,PyObject*,P const*policies) 
{
    from_python<A0*>c0(PyTuple_GET_ITEM(args_,0));
    if (!c0.convertible()) return 0;
    from_python<A1>c1 (PyTuple_GET_ITEM(args_,1 ));
    if (!c1.convertible()) return 0;
    from_python<A2>c2 (PyTuple_GET_ITEM(args_,2 ));
    if (!c2.convertible()) return 0;
    from_python<A3>c3 (PyTuple_GET_ITEM(args_,3 ));
    if (!c3.convertible()) return 0;
    if (!policies->precall(args_)) return 0;
    ((c0(PyTuple_GET_ITEM(args_,0)))->*pmf)( c1 (PyTuple_GET_ITEM(args_,1 )),c2 (PyTuple_GET_ITEM(args_,2 )),c3 (PyTuple_GET_ITEM(args_,3 )) );
    return policies->postcall(args_,detail::none());
}
template<class P,class A0,class A1,class A2,class A3,class A4>static PyObject*call( R( A0::*pmf )( A1,A2,A3,A4 ),PyObject*args_,PyObject*,P const*policies) 
{
    from_python<A0*>c0(PyTuple_GET_ITEM(args_,0));
    if (!c0.convertible()) return 0;
    from_python<A1>c1 (PyTuple_GET_ITEM(args_,1 ));
    if (!c1.convertible()) return 0;
    from_python<A2>c2 (PyTuple_GET_ITEM(args_,2 ));
    if (!c2.convertible()) return 0;
    from_python<A3>c3 (PyTuple_GET_ITEM(args_,3 ));
    if (!c3.convertible()) return 0;
    from_python<A4>c4 (PyTuple_GET_ITEM(args_,4 ));
    if (!c4.convertible()) return 0;
    if (!policies->precall(args_)) return 0;
    ((c0(PyTuple_GET_ITEM(args_,0)))->*pmf)( c1 (PyTuple_GET_ITEM(args_,1 )),c2 (PyTuple_GET_ITEM(args_,2 )),c3 (PyTuple_GET_ITEM(args_,3 )),c4 (PyTuple_GET_ITEM(args_,4 )) );
    return policies->postcall(args_,detail::none());
}
template<class P,class A0,class A1,class A2,class A3,class A4,class A5>static PyObject*call( R( A0::*pmf )( A1,A2,A3,A4,A5 ),PyObject*args_,PyObject*,P const*policies) 
{
    from_python<A0*>c0(PyTuple_GET_ITEM(args_,0));
    if (!c0.convertible()) return 0;
    from_python<A1>c1 (PyTuple_GET_ITEM(args_,1 ));
    if (!c1.convertible()) return 0;
    from_python<A2>c2 (PyTuple_GET_ITEM(args_,2 ));
    if (!c2.convertible()) return 0;
    from_python<A3>c3 (PyTuple_GET_ITEM(args_,3 ));
    if (!c3.convertible()) return 0;
    from_python<A4>c4 (PyTuple_GET_ITEM(args_,4 ));
    if (!c4.convertible()) return 0;
    from_python<A5>c5 (PyTuple_GET_ITEM(args_,5 ));
    if (!c5.convertible()) return 0;
    if (!policies->precall(args_)) return 0;
    ((c0(PyTuple_GET_ITEM(args_,0)))->*pmf)( c1 (PyTuple_GET_ITEM(args_,1 )),c2 (PyTuple_GET_ITEM(args_,2 )),c3 (PyTuple_GET_ITEM(args_,3 )),c4 (PyTuple_GET_ITEM(args_,4 )),c5 (PyTuple_GET_ITEM(args_,5 )) );
    return policies->postcall(args_,detail::none());
}
template<class P,class A0,class A1,class A2,class A3,class A4,class A5,class A6>static PyObject*call( R( A0::*pmf )( A1,A2,A3,A4,A5,A6 ),PyObject*args_,PyObject*,P const*policies) 
{
    from_python<A0*>c0(PyTuple_GET_ITEM(args_,0));
    if (!c0.convertible()) return 0;
    from_python<A1>c1 (PyTuple_GET_ITEM(args_,1 ));
    if (!c1.convertible()) return 0;
    from_python<A2>c2 (PyTuple_GET_ITEM(args_,2 ));
    if (!c2.convertible()) return 0;
    from_python<A3>c3 (PyTuple_GET_ITEM(args_,3 ));
    if (!c3.convertible()) return 0;
    from_python<A4>c4 (PyTuple_GET_ITEM(args_,4 ));
    if (!c4.convertible()) return 0;
    from_python<A5>c5 (PyTuple_GET_ITEM(args_,5 ));
    if (!c5.convertible()) return 0;
    from_python<A6>c6 (PyTuple_GET_ITEM(args_,6 ));
    if (!c6.convertible()) return 0;
    if (!policies->precall(args_)) return 0;
    ((c0(PyTuple_GET_ITEM(args_,0)))->*pmf)( c1 (PyTuple_GET_ITEM(args_,1 )),c2 (PyTuple_GET_ITEM(args_,2 )),c3 (PyTuple_GET_ITEM(args_,3 )),c4 (PyTuple_GET_ITEM(args_,4 )),c5 (PyTuple_GET_ITEM(args_,5 )),c6 (PyTuple_GET_ITEM(args_,6 )) );
    return policies->postcall(args_,detail::none());
}
template<class P,class A0,class A1,class A2,class A3,class A4,class A5,class A6,class A7>static PyObject*call( R( A0::*pmf )( A1,A2,A3,A4,A5,A6,A7 ),PyObject*args_,PyObject*,P const*policies) 
{
    from_python<A0*>c0(PyTuple_GET_ITEM(args_,0));
    if (!c0.convertible()) return 0;
    from_python<A1>c1 (PyTuple_GET_ITEM(args_,1 ));
    if (!c1.convertible()) return 0;
    from_python<A2>c2 (PyTuple_GET_ITEM(args_,2 ));
    if (!c2.convertible()) return 0;
    from_python<A3>c3 (PyTuple_GET_ITEM(args_,3 ));
    if (!c3.convertible()) return 0;
    from_python<A4>c4 (PyTuple_GET_ITEM(args_,4 ));
    if (!c4.convertible()) return 0;
    from_python<A5>c5 (PyTuple_GET_ITEM(args_,5 ));
    if (!c5.convertible()) return 0;
    from_python<A6>c6 (PyTuple_GET_ITEM(args_,6 ));
    if (!c6.convertible()) return 0;
    from_python<A7>c7 (PyTuple_GET_ITEM(args_,7 ));
    if (!c7.convertible()) return 0;
    if (!policies->precall(args_)) return 0;
    ((c0(PyTuple_GET_ITEM(args_,0)))->*pmf)( c1 (PyTuple_GET_ITEM(args_,1 )),c2 (PyTuple_GET_ITEM(args_,2 )),c3 (PyTuple_GET_ITEM(args_,3 )),c4 (PyTuple_GET_ITEM(args_,4 )),c5 (PyTuple_GET_ITEM(args_,5 )),c6 (PyTuple_GET_ITEM(args_,6 )),c7 (PyTuple_GET_ITEM(args_,7 )) );
    return policies->postcall(args_,detail::none());
}
template<class P,class A0,class A1,class A2,class A3,class A4,class A5,class A6,class A7,class A8>static PyObject*call( R( A0::*pmf )( A1,A2,A3,A4,A5,A6,A7,A8 ),PyObject*args_,PyObject*,P const*policies) 
{
    from_python<A0*>c0(PyTuple_GET_ITEM(args_,0));
    if (!c0.convertible()) return 0;
    from_python<A1>c1 (PyTuple_GET_ITEM(args_,1 ));
    if (!c1.convertible()) return 0;
    from_python<A2>c2 (PyTuple_GET_ITEM(args_,2 ));
    if (!c2.convertible()) return 0;
    from_python<A3>c3 (PyTuple_GET_ITEM(args_,3 ));
    if (!c3.convertible()) return 0;
    from_python<A4>c4 (PyTuple_GET_ITEM(args_,4 ));
    if (!c4.convertible()) return 0;
    from_python<A5>c5 (PyTuple_GET_ITEM(args_,5 ));
    if (!c5.convertible()) return 0;
    from_python<A6>c6 (PyTuple_GET_ITEM(args_,6 ));
    if (!c6.convertible()) return 0;
    from_python<A7>c7 (PyTuple_GET_ITEM(args_,7 ));
    if (!c7.convertible()) return 0;
    from_python<A8>c8 (PyTuple_GET_ITEM(args_,8 ));
    if (!c8.convertible()) return 0;
    if (!policies->precall(args_)) return 0;
    ((c0(PyTuple_GET_ITEM(args_,0)))->*pmf)( c1 (PyTuple_GET_ITEM(args_,1 )),c2 (PyTuple_GET_ITEM(args_,2 )),c3 (PyTuple_GET_ITEM(args_,3 )),c4 (PyTuple_GET_ITEM(args_,4 )),c5 (PyTuple_GET_ITEM(args_,5 )),c6 (PyTuple_GET_ITEM(args_,6 )),c7 (PyTuple_GET_ITEM(args_,7 )),c8 (PyTuple_GET_ITEM(args_,8 )) );
    return policies->postcall(args_,detail::none());
}
template<class P,class A0,class A1,class A2,class A3,class A4,class A5,class A6,class A7,class A8,class A9>static PyObject*call( R( A0::*pmf )( A1,A2,A3,A4,A5,A6,A7,A8,A9 ),PyObject*args_,PyObject*,P const*policies) 
{
    from_python<A0*>c0(PyTuple_GET_ITEM(args_,0));
    if (!c0.convertible()) return 0;
    from_python<A1>c1 (PyTuple_GET_ITEM(args_,1 ));
    if (!c1.convertible()) return 0;
    from_python<A2>c2 (PyTuple_GET_ITEM(args_,2 ));
    if (!c2.convertible()) return 0;
    from_python<A3>c3 (PyTuple_GET_ITEM(args_,3 ));
    if (!c3.convertible()) return 0;
    from_python<A4>c4 (PyTuple_GET_ITEM(args_,4 ));
    if (!c4.convertible()) return 0;
    from_python<A5>c5 (PyTuple_GET_ITEM(args_,5 ));
    if (!c5.convertible()) return 0;
    from_python<A6>c6 (PyTuple_GET_ITEM(args_,6 ));
    if (!c6.convertible()) return 0;
    from_python<A7>c7 (PyTuple_GET_ITEM(args_,7 ));
    if (!c7.convertible()) return 0;
    from_python<A8>c8 (PyTuple_GET_ITEM(args_,8 ));
    if (!c8.convertible()) return 0;
    from_python<A9>c9 (PyTuple_GET_ITEM(args_,9 ));
    if (!c9.convertible()) return 0;
    if (!policies->precall(args_)) return 0;
    ((c0(PyTuple_GET_ITEM(args_,0)))->*pmf)( c1 (PyTuple_GET_ITEM(args_,1 )),c2 (PyTuple_GET_ITEM(args_,2 )),c3 (PyTuple_GET_ITEM(args_,3 )),c4 (PyTuple_GET_ITEM(args_,4 )),c5 (PyTuple_GET_ITEM(args_,5 )),c6 (PyTuple_GET_ITEM(args_,6 )),c7 (PyTuple_GET_ITEM(args_,7 )),c8 (PyTuple_GET_ITEM(args_,8 )),c9 (PyTuple_GET_ITEM(args_,9 )) );
    return policies->postcall(args_,detail::none());
}
template<class P,class A0>static PyObject*call( R( A0::*pmf )( ) const,PyObject*args_,PyObject*,P const*policies) 
{
    from_python<A0 const*>c0(PyTuple_GET_ITEM(args_,0));
    if (!c0.convertible()) return 0;
    if (!policies->precall(args_)) return 0;
    ((c0(PyTuple_GET_ITEM(args_,0)))->*pmf)( );
    return policies->postcall(args_,detail::none());
}
template<class P,class A0,class A1>static PyObject*call( R( A0::*pmf )( A1 ) const,PyObject*args_,PyObject*,P const*policies) 
{
    from_python<A0 const*>c0(PyTuple_GET_ITEM(args_,0));
    if (!c0.convertible()) return 0;
    from_python<A1>c1 (PyTuple_GET_ITEM(args_,1 ));
    if (!c1.convertible()) return 0;
    if (!policies->precall(args_)) return 0;
    ((c0(PyTuple_GET_ITEM(args_,0)))->*pmf)( c1 (PyTuple_GET_ITEM(args_,1 )) );
    return policies->postcall(args_,detail::none());
}
template<class P,class A0,class A1,class A2>static PyObject*call( R( A0::*pmf )( A1,A2 ) const,PyObject*args_,PyObject*,P const*policies) 
{
    from_python<A0 const*>c0(PyTuple_GET_ITEM(args_,0));
    if (!c0.convertible()) return 0;
    from_python<A1>c1 (PyTuple_GET_ITEM(args_,1 ));
    if (!c1.convertible()) return 0;
    from_python<A2>c2 (PyTuple_GET_ITEM(args_,2 ));
    if (!c2.convertible()) return 0;
    if (!policies->precall(args_)) return 0;
    ((c0(PyTuple_GET_ITEM(args_,0)))->*pmf)( c1 (PyTuple_GET_ITEM(args_,1 )),c2 (PyTuple_GET_ITEM(args_,2 )) );
    return policies->postcall(args_,detail::none());
}
template<class P,class A0,class A1,class A2,class A3>static PyObject*call( R( A0::*pmf )( A1,A2,A3 ) const,PyObject*args_,PyObject*,P const*policies) 
{
    from_python<A0 const*>c0(PyTuple_GET_ITEM(args_,0));
    if (!c0.convertible()) return 0;
    from_python<A1>c1 (PyTuple_GET_ITEM(args_,1 ));
    if (!c1.convertible()) return 0;
    from_python<A2>c2 (PyTuple_GET_ITEM(args_,2 ));
    if (!c2.convertible()) return 0;
    from_python<A3>c3 (PyTuple_GET_ITEM(args_,3 ));
    if (!c3.convertible()) return 0;
    if (!policies->precall(args_)) return 0;
    ((c0(PyTuple_GET_ITEM(args_,0)))->*pmf)( c1 (PyTuple_GET_ITEM(args_,1 )),c2 (PyTuple_GET_ITEM(args_,2 )),c3 (PyTuple_GET_ITEM(args_,3 )) );
    return policies->postcall(args_,detail::none());
}
template<class P,class A0,class A1,class A2,class A3,class A4>static PyObject*call( R( A0::*pmf )( A1,A2,A3,A4 ) const,PyObject*args_,PyObject*,P const*policies) 
{
    from_python<A0 const*>c0(PyTuple_GET_ITEM(args_,0));
    if (!c0.convertible()) return 0;
    from_python<A1>c1 (PyTuple_GET_ITEM(args_,1 ));
    if (!c1.convertible()) return 0;
    from_python<A2>c2 (PyTuple_GET_ITEM(args_,2 ));
    if (!c2.convertible()) return 0;
    from_python<A3>c3 (PyTuple_GET_ITEM(args_,3 ));
    if (!c3.convertible()) return 0;
    from_python<A4>c4 (PyTuple_GET_ITEM(args_,4 ));
    if (!c4.convertible()) return 0;
    if (!policies->precall(args_)) return 0;
    ((c0(PyTuple_GET_ITEM(args_,0)))->*pmf)( c1 (PyTuple_GET_ITEM(args_,1 )),c2 (PyTuple_GET_ITEM(args_,2 )),c3 (PyTuple_GET_ITEM(args_,3 )),c4 (PyTuple_GET_ITEM(args_,4 )) );
    return policies->postcall(args_,detail::none());
}
template<class P,class A0,class A1,class A2,class A3,class A4,class A5>static PyObject*call( R( A0::*pmf )( A1,A2,A3,A4,A5 ) const,PyObject*args_,PyObject*,P const*policies) 
{
    from_python<A0 const*>c0(PyTuple_GET_ITEM(args_,0));
    if (!c0.convertible()) return 0;
    from_python<A1>c1 (PyTuple_GET_ITEM(args_,1 ));
    if (!c1.convertible()) return 0;
    from_python<A2>c2 (PyTuple_GET_ITEM(args_,2 ));
    if (!c2.convertible()) return 0;
    from_python<A3>c3 (PyTuple_GET_ITEM(args_,3 ));
    if (!c3.convertible()) return 0;
    from_python<A4>c4 (PyTuple_GET_ITEM(args_,4 ));
    if (!c4.convertible()) return 0;
    from_python<A5>c5 (PyTuple_GET_ITEM(args_,5 ));
    if (!c5.convertible()) return 0;
    if (!policies->precall(args_)) return 0;
    ((c0(PyTuple_GET_ITEM(args_,0)))->*pmf)( c1 (PyTuple_GET_ITEM(args_,1 )),c2 (PyTuple_GET_ITEM(args_,2 )),c3 (PyTuple_GET_ITEM(args_,3 )),c4 (PyTuple_GET_ITEM(args_,4 )),c5 (PyTuple_GET_ITEM(args_,5 )) );
    return policies->postcall(args_,detail::none());
}
template<class P,class A0,class A1,class A2,class A3,class A4,class A5,class A6>static PyObject*call( R( A0::*pmf )( A1,A2,A3,A4,A5,A6 ) const,PyObject*args_,PyObject*,P const*policies) 
{
    from_python<A0 const*>c0(PyTuple_GET_ITEM(args_,0));
    if (!c0.convertible()) return 0;
    from_python<A1>c1 (PyTuple_GET_ITEM(args_,1 ));
    if (!c1.convertible()) return 0;
    from_python<A2>c2 (PyTuple_GET_ITEM(args_,2 ));
    if (!c2.convertible()) return 0;
    from_python<A3>c3 (PyTuple_GET_ITEM(args_,3 ));
    if (!c3.convertible()) return 0;
    from_python<A4>c4 (PyTuple_GET_ITEM(args_,4 ));
    if (!c4.convertible()) return 0;
    from_python<A5>c5 (PyTuple_GET_ITEM(args_,5 ));
    if (!c5.convertible()) return 0;
    from_python<A6>c6 (PyTuple_GET_ITEM(args_,6 ));
    if (!c6.convertible()) return 0;
    if (!policies->precall(args_)) return 0;
    ((c0(PyTuple_GET_ITEM(args_,0)))->*pmf)( c1 (PyTuple_GET_ITEM(args_,1 )),c2 (PyTuple_GET_ITEM(args_,2 )),c3 (PyTuple_GET_ITEM(args_,3 )),c4 (PyTuple_GET_ITEM(args_,4 )),c5 (PyTuple_GET_ITEM(args_,5 )),c6 (PyTuple_GET_ITEM(args_,6 )) );
    return policies->postcall(args_,detail::none());
}
template<class P,class A0,class A1,class A2,class A3,class A4,class A5,class A6,class A7>static PyObject*call( R( A0::*pmf )( A1,A2,A3,A4,A5,A6,A7 ) const,PyObject*args_,PyObject*,P const*policies) 
{
    from_python<A0 const*>c0(PyTuple_GET_ITEM(args_,0));
    if (!c0.convertible()) return 0;
    from_python<A1>c1 (PyTuple_GET_ITEM(args_,1 ));
    if (!c1.convertible()) return 0;
    from_python<A2>c2 (PyTuple_GET_ITEM(args_,2 ));
    if (!c2.convertible()) return 0;
    from_python<A3>c3 (PyTuple_GET_ITEM(args_,3 ));
    if (!c3.convertible()) return 0;
    from_python<A4>c4 (PyTuple_GET_ITEM(args_,4 ));
    if (!c4.convertible()) return 0;
    from_python<A5>c5 (PyTuple_GET_ITEM(args_,5 ));
    if (!c5.convertible()) return 0;
    from_python<A6>c6 (PyTuple_GET_ITEM(args_,6 ));
    if (!c6.convertible()) return 0;
    from_python<A7>c7 (PyTuple_GET_ITEM(args_,7 ));
    if (!c7.convertible()) return 0;
    if (!policies->precall(args_)) return 0;
    ((c0(PyTuple_GET_ITEM(args_,0)))->*pmf)( c1 (PyTuple_GET_ITEM(args_,1 )),c2 (PyTuple_GET_ITEM(args_,2 )),c3 (PyTuple_GET_ITEM(args_,3 )),c4 (PyTuple_GET_ITEM(args_,4 )),c5 (PyTuple_GET_ITEM(args_,5 )),c6 (PyTuple_GET_ITEM(args_,6 )),c7 (PyTuple_GET_ITEM(args_,7 )) );
    return policies->postcall(args_,detail::none());
}
template<class P,class A0,class A1,class A2,class A3,class A4,class A5,class A6,class A7,class A8>static PyObject*call( R( A0::*pmf )( A1,A2,A3,A4,A5,A6,A7,A8 ) const,PyObject*args_,PyObject*,P const*policies) 
{
    from_python<A0 const*>c0(PyTuple_GET_ITEM(args_,0));
    if (!c0.convertible()) return 0;
    from_python<A1>c1 (PyTuple_GET_ITEM(args_,1 ));
    if (!c1.convertible()) return 0;
    from_python<A2>c2 (PyTuple_GET_ITEM(args_,2 ));
    if (!c2.convertible()) return 0;
    from_python<A3>c3 (PyTuple_GET_ITEM(args_,3 ));
    if (!c3.convertible()) return 0;
    from_python<A4>c4 (PyTuple_GET_ITEM(args_,4 ));
    if (!c4.convertible()) return 0;
    from_python<A5>c5 (PyTuple_GET_ITEM(args_,5 ));
    if (!c5.convertible()) return 0;
    from_python<A6>c6 (PyTuple_GET_ITEM(args_,6 ));
    if (!c6.convertible()) return 0;
    from_python<A7>c7 (PyTuple_GET_ITEM(args_,7 ));
    if (!c7.convertible()) return 0;
    from_python<A8>c8 (PyTuple_GET_ITEM(args_,8 ));
    if (!c8.convertible()) return 0;
    if (!policies->precall(args_)) return 0;
    ((c0(PyTuple_GET_ITEM(args_,0)))->*pmf)( c1 (PyTuple_GET_ITEM(args_,1 )),c2 (PyTuple_GET_ITEM(args_,2 )),c3 (PyTuple_GET_ITEM(args_,3 )),c4 (PyTuple_GET_ITEM(args_,4 )),c5 (PyTuple_GET_ITEM(args_,5 )),c6 (PyTuple_GET_ITEM(args_,6 )),c7 (PyTuple_GET_ITEM(args_,7 )),c8 (PyTuple_GET_ITEM(args_,8 )) );
    return policies->postcall(args_,detail::none());
}
template<class P,class A0,class A1,class A2,class A3,class A4,class A5,class A6,class A7,class A8,class A9>static PyObject*call( R( A0::*pmf )( A1,A2,A3,A4,A5,A6,A7,A8,A9 ) const,PyObject*args_,PyObject*,P const*policies) 
{
    from_python<A0 const*>c0(PyTuple_GET_ITEM(args_,0));
    if (!c0.convertible()) return 0;
    from_python<A1>c1 (PyTuple_GET_ITEM(args_,1 ));
    if (!c1.convertible()) return 0;
    from_python<A2>c2 (PyTuple_GET_ITEM(args_,2 ));
    if (!c2.convertible()) return 0;
    from_python<A3>c3 (PyTuple_GET_ITEM(args_,3 ));
    if (!c3.convertible()) return 0;
    from_python<A4>c4 (PyTuple_GET_ITEM(args_,4 ));
    if (!c4.convertible()) return 0;
    from_python<A5>c5 (PyTuple_GET_ITEM(args_,5 ));
    if (!c5.convertible()) return 0;
    from_python<A6>c6 (PyTuple_GET_ITEM(args_,6 ));
    if (!c6.convertible()) return 0;
    from_python<A7>c7 (PyTuple_GET_ITEM(args_,7 ));
    if (!c7.convertible()) return 0;
    from_python<A8>c8 (PyTuple_GET_ITEM(args_,8 ));
    if (!c8.convertible()) return 0;
    from_python<A9>c9 (PyTuple_GET_ITEM(args_,9 ));
    if (!c9.convertible()) return 0;
    if (!policies->precall(args_)) return 0;
    ((c0(PyTuple_GET_ITEM(args_,0)))->*pmf)( c1 (PyTuple_GET_ITEM(args_,1 )),c2 (PyTuple_GET_ITEM(args_,2 )),c3 (PyTuple_GET_ITEM(args_,3 )),c4 (PyTuple_GET_ITEM(args_,4 )),c5 (PyTuple_GET_ITEM(args_,5 )),c6 (PyTuple_GET_ITEM(args_,6 )),c7 (PyTuple_GET_ITEM(args_,7 )),c8 (PyTuple_GET_ITEM(args_,8 )),c9 (PyTuple_GET_ITEM(args_,9 )) );
    return policies->postcall(args_,detail::none());
}
template<class P,class A0>static PyObject*call( R( A0::*pmf )( ) volatile,PyObject*args_,PyObject*,P const*policies) 
{
    from_python<A0 volatile*>c0(PyTuple_GET_ITEM(args_,0));
    if (!c0.convertible()) return 0;
    if (!policies->precall(args_)) return 0;
    ((c0(PyTuple_GET_ITEM(args_,0)))->*pmf)( );
    return policies->postcall(args_,detail::none());
}
template<class P,class A0,class A1>static PyObject*call( R( A0::*pmf )( A1 ) volatile,PyObject*args_,PyObject*,P const*policies) 
{
    from_python<A0 volatile*>c0(PyTuple_GET_ITEM(args_,0));
    if (!c0.convertible()) return 0;
    from_python<A1>c1 (PyTuple_GET_ITEM(args_,1 ));
    if (!c1.convertible()) return 0;
    if (!policies->precall(args_)) return 0;
    ((c0(PyTuple_GET_ITEM(args_,0)))->*pmf)( c1 (PyTuple_GET_ITEM(args_,1 )) );
    return policies->postcall(args_,detail::none());
}
template<class P,class A0,class A1,class A2>static PyObject*call( R( A0::*pmf )( A1,A2 ) volatile,PyObject*args_,PyObject*,P const*policies) 
{
    from_python<A0 volatile*>c0(PyTuple_GET_ITEM(args_,0));
    if (!c0.convertible()) return 0;
    from_python<A1>c1 (PyTuple_GET_ITEM(args_,1 ));
    if (!c1.convertible()) return 0;
    from_python<A2>c2 (PyTuple_GET_ITEM(args_,2 ));
    if (!c2.convertible()) return 0;
    if (!policies->precall(args_)) return 0;
    ((c0(PyTuple_GET_ITEM(args_,0)))->*pmf)( c1 (PyTuple_GET_ITEM(args_,1 )),c2 (PyTuple_GET_ITEM(args_,2 )) );
    return policies->postcall(args_,detail::none());
}
template<class P,class A0,class A1,class A2,class A3>static PyObject*call( R( A0::*pmf )( A1,A2,A3 ) volatile,PyObject*args_,PyObject*,P const*policies) 
{
    from_python<A0 volatile*>c0(PyTuple_GET_ITEM(args_,0));
    if (!c0.convertible()) return 0;
    from_python<A1>c1 (PyTuple_GET_ITEM(args_,1 ));
    if (!c1.convertible()) return 0;
    from_python<A2>c2 (PyTuple_GET_ITEM(args_,2 ));
    if (!c2.convertible()) return 0;
    from_python<A3>c3 (PyTuple_GET_ITEM(args_,3 ));
    if (!c3.convertible()) return 0;
    if (!policies->precall(args_)) return 0;
    ((c0(PyTuple_GET_ITEM(args_,0)))->*pmf)( c1 (PyTuple_GET_ITEM(args_,1 )),c2 (PyTuple_GET_ITEM(args_,2 )),c3 (PyTuple_GET_ITEM(args_,3 )) );
    return policies->postcall(args_,detail::none());
}
template<class P,class A0,class A1,class A2,class A3,class A4>static PyObject*call( R( A0::*pmf )( A1,A2,A3,A4 ) volatile,PyObject*args_,PyObject*,P const*policies) 
{
    from_python<A0 volatile*>c0(PyTuple_GET_ITEM(args_,0));
    if (!c0.convertible()) return 0;
    from_python<A1>c1 (PyTuple_GET_ITEM(args_,1 ));
    if (!c1.convertible()) return 0;
    from_python<A2>c2 (PyTuple_GET_ITEM(args_,2 ));
    if (!c2.convertible()) return 0;
    from_python<A3>c3 (PyTuple_GET_ITEM(args_,3 ));
    if (!c3.convertible()) return 0;
    from_python<A4>c4 (PyTuple_GET_ITEM(args_,4 ));
    if (!c4.convertible()) return 0;
    if (!policies->precall(args_)) return 0;
    ((c0(PyTuple_GET_ITEM(args_,0)))->*pmf)( c1 (PyTuple_GET_ITEM(args_,1 )),c2 (PyTuple_GET_ITEM(args_,2 )),c3 (PyTuple_GET_ITEM(args_,3 )),c4 (PyTuple_GET_ITEM(args_,4 )) );
    return policies->postcall(args_,detail::none());
}
template<class P,class A0,class A1,class A2,class A3,class A4,class A5>static PyObject*call( R( A0::*pmf )( A1,A2,A3,A4,A5 ) volatile,PyObject*args_,PyObject*,P const*policies) 
{
    from_python<A0 volatile*>c0(PyTuple_GET_ITEM(args_,0));
    if (!c0.convertible()) return 0;
    from_python<A1>c1 (PyTuple_GET_ITEM(args_,1 ));
    if (!c1.convertible()) return 0;
    from_python<A2>c2 (PyTuple_GET_ITEM(args_,2 ));
    if (!c2.convertible()) return 0;
    from_python<A3>c3 (PyTuple_GET_ITEM(args_,3 ));
    if (!c3.convertible()) return 0;
    from_python<A4>c4 (PyTuple_GET_ITEM(args_,4 ));
    if (!c4.convertible()) return 0;
    from_python<A5>c5 (PyTuple_GET_ITEM(args_,5 ));
    if (!c5.convertible()) return 0;
    if (!policies->precall(args_)) return 0;
    ((c0(PyTuple_GET_ITEM(args_,0)))->*pmf)( c1 (PyTuple_GET_ITEM(args_,1 )),c2 (PyTuple_GET_ITEM(args_,2 )),c3 (PyTuple_GET_ITEM(args_,3 )),c4 (PyTuple_GET_ITEM(args_,4 )),c5 (PyTuple_GET_ITEM(args_,5 )) );
    return policies->postcall(args_,detail::none());
}
template<class P,class A0,class A1,class A2,class A3,class A4,class A5,class A6>static PyObject*call( R( A0::*pmf )( A1,A2,A3,A4,A5,A6 ) volatile,PyObject*args_,PyObject*,P const*policies) 
{
    from_python<A0 volatile*>c0(PyTuple_GET_ITEM(args_,0));
    if (!c0.convertible()) return 0;
    from_python<A1>c1 (PyTuple_GET_ITEM(args_,1 ));
    if (!c1.convertible()) return 0;
    from_python<A2>c2 (PyTuple_GET_ITEM(args_,2 ));
    if (!c2.convertible()) return 0;
    from_python<A3>c3 (PyTuple_GET_ITEM(args_,3 ));
    if (!c3.convertible()) return 0;
    from_python<A4>c4 (PyTuple_GET_ITEM(args_,4 ));
    if (!c4.convertible()) return 0;
    from_python<A5>c5 (PyTuple_GET_ITEM(args_,5 ));
    if (!c5.convertible()) return 0;
    from_python<A6>c6 (PyTuple_GET_ITEM(args_,6 ));
    if (!c6.convertible()) return 0;
    if (!policies->precall(args_)) return 0;
    ((c0(PyTuple_GET_ITEM(args_,0)))->*pmf)( c1 (PyTuple_GET_ITEM(args_,1 )),c2 (PyTuple_GET_ITEM(args_,2 )),c3 (PyTuple_GET_ITEM(args_,3 )),c4 (PyTuple_GET_ITEM(args_,4 )),c5 (PyTuple_GET_ITEM(args_,5 )),c6 (PyTuple_GET_ITEM(args_,6 )) );
    return policies->postcall(args_,detail::none());
}
template<class P,class A0,class A1,class A2,class A3,class A4,class A5,class A6,class A7>static PyObject*call( R( A0::*pmf )( A1,A2,A3,A4,A5,A6,A7 ) volatile,PyObject*args_,PyObject*,P const*policies) 
{
    from_python<A0 volatile*>c0(PyTuple_GET_ITEM(args_,0));
    if (!c0.convertible()) return 0;
    from_python<A1>c1 (PyTuple_GET_ITEM(args_,1 ));
    if (!c1.convertible()) return 0;
    from_python<A2>c2 (PyTuple_GET_ITEM(args_,2 ));
    if (!c2.convertible()) return 0;
    from_python<A3>c3 (PyTuple_GET_ITEM(args_,3 ));
    if (!c3.convertible()) return 0;
    from_python<A4>c4 (PyTuple_GET_ITEM(args_,4 ));
    if (!c4.convertible()) return 0;
    from_python<A5>c5 (PyTuple_GET_ITEM(args_,5 ));
    if (!c5.convertible()) return 0;
    from_python<A6>c6 (PyTuple_GET_ITEM(args_,6 ));
    if (!c6.convertible()) return 0;
    from_python<A7>c7 (PyTuple_GET_ITEM(args_,7 ));
    if (!c7.convertible()) return 0;
    if (!policies->precall(args_)) return 0;
    ((c0(PyTuple_GET_ITEM(args_,0)))->*pmf)( c1 (PyTuple_GET_ITEM(args_,1 )),c2 (PyTuple_GET_ITEM(args_,2 )),c3 (PyTuple_GET_ITEM(args_,3 )),c4 (PyTuple_GET_ITEM(args_,4 )),c5 (PyTuple_GET_ITEM(args_,5 )),c6 (PyTuple_GET_ITEM(args_,6 )),c7 (PyTuple_GET_ITEM(args_,7 )) );
    return policies->postcall(args_,detail::none());
}
template<class P,class A0,class A1,class A2,class A3,class A4,class A5,class A6,class A7,class A8>static PyObject*call( R( A0::*pmf )( A1,A2,A3,A4,A5,A6,A7,A8 ) volatile,PyObject*args_,PyObject*,P const*policies) 
{
    from_python<A0 volatile*>c0(PyTuple_GET_ITEM(args_,0));
    if (!c0.convertible()) return 0;
    from_python<A1>c1 (PyTuple_GET_ITEM(args_,1 ));
    if (!c1.convertible()) return 0;
    from_python<A2>c2 (PyTuple_GET_ITEM(args_,2 ));
    if (!c2.convertible()) return 0;
    from_python<A3>c3 (PyTuple_GET_ITEM(args_,3 ));
    if (!c3.convertible()) return 0;
    from_python<A4>c4 (PyTuple_GET_ITEM(args_,4 ));
    if (!c4.convertible()) return 0;
    from_python<A5>c5 (PyTuple_GET_ITEM(args_,5 ));
    if (!c5.convertible()) return 0;
    from_python<A6>c6 (PyTuple_GET_ITEM(args_,6 ));
    if (!c6.convertible()) return 0;
    from_python<A7>c7 (PyTuple_GET_ITEM(args_,7 ));
    if (!c7.convertible()) return 0;
    from_python<A8>c8 (PyTuple_GET_ITEM(args_,8 ));
    if (!c8.convertible()) return 0;
    if (!policies->precall(args_)) return 0;
    ((c0(PyTuple_GET_ITEM(args_,0)))->*pmf)( c1 (PyTuple_GET_ITEM(args_,1 )),c2 (PyTuple_GET_ITEM(args_,2 )),c3 (PyTuple_GET_ITEM(args_,3 )),c4 (PyTuple_GET_ITEM(args_,4 )),c5 (PyTuple_GET_ITEM(args_,5 )),c6 (PyTuple_GET_ITEM(args_,6 )),c7 (PyTuple_GET_ITEM(args_,7 )),c8 (PyTuple_GET_ITEM(args_,8 )) );
    return policies->postcall(args_,detail::none());
}
template<class P,class A0,class A1,class A2,class A3,class A4,class A5,class A6,class A7,class A8,class A9>static PyObject*call( R( A0::*pmf )( A1,A2,A3,A4,A5,A6,A7,A8,A9 ) volatile,PyObject*args_,PyObject*,P const*policies) 
{
    from_python<A0 volatile*>c0(PyTuple_GET_ITEM(args_,0));
    if (!c0.convertible()) return 0;
    from_python<A1>c1 (PyTuple_GET_ITEM(args_,1 ));
    if (!c1.convertible()) return 0;
    from_python<A2>c2 (PyTuple_GET_ITEM(args_,2 ));
    if (!c2.convertible()) return 0;
    from_python<A3>c3 (PyTuple_GET_ITEM(args_,3 ));
    if (!c3.convertible()) return 0;
    from_python<A4>c4 (PyTuple_GET_ITEM(args_,4 ));
    if (!c4.convertible()) return 0;
    from_python<A5>c5 (PyTuple_GET_ITEM(args_,5 ));
    if (!c5.convertible()) return 0;
    from_python<A6>c6 (PyTuple_GET_ITEM(args_,6 ));
    if (!c6.convertible()) return 0;
    from_python<A7>c7 (PyTuple_GET_ITEM(args_,7 ));
    if (!c7.convertible()) return 0;
    from_python<A8>c8 (PyTuple_GET_ITEM(args_,8 ));
    if (!c8.convertible()) return 0;
    from_python<A9>c9 (PyTuple_GET_ITEM(args_,9 ));
    if (!c9.convertible()) return 0;
    if (!policies->precall(args_)) return 0;
    ((c0(PyTuple_GET_ITEM(args_,0)))->*pmf)( c1 (PyTuple_GET_ITEM(args_,1 )),c2 (PyTuple_GET_ITEM(args_,2 )),c3 (PyTuple_GET_ITEM(args_,3 )),c4 (PyTuple_GET_ITEM(args_,4 )),c5 (PyTuple_GET_ITEM(args_,5 )),c6 (PyTuple_GET_ITEM(args_,6 )),c7 (PyTuple_GET_ITEM(args_,7 )),c8 (PyTuple_GET_ITEM(args_,8 )),c9 (PyTuple_GET_ITEM(args_,9 )) );
    return policies->postcall(args_,detail::none());
}
template<class P,class A0>static PyObject*call( R( A0::*pmf )( ) const volatile,PyObject*args_,PyObject*,P const*policies) 
{
    from_python<A0 const volatile*>c0(PyTuple_GET_ITEM(args_,0));
    if (!c0.convertible()) return 0;
    if (!policies->precall(args_)) return 0;
    ((c0(PyTuple_GET_ITEM(args_,0)))->*pmf)( );
    return policies->postcall(args_,detail::none());
}
template<class P,class A0,class A1>static PyObject*call( R( A0::*pmf )( A1 ) const volatile,PyObject*args_,PyObject*,P const*policies) 
{
    from_python<A0 const volatile*>c0(PyTuple_GET_ITEM(args_,0));
    if (!c0.convertible()) return 0;
    from_python<A1>c1 (PyTuple_GET_ITEM(args_,1 ));
    if (!c1.convertible()) return 0;
    if (!policies->precall(args_)) return 0;
    ((c0(PyTuple_GET_ITEM(args_,0)))->*pmf)( c1 (PyTuple_GET_ITEM(args_,1 )) );
    return policies->postcall(args_,detail::none());
}
template<class P,class A0,class A1,class A2>static PyObject*call( R( A0::*pmf )( A1,A2 ) const volatile,PyObject*args_,PyObject*,P const*policies) 
{
    from_python<A0 const volatile*>c0(PyTuple_GET_ITEM(args_,0));
    if (!c0.convertible()) return 0;
    from_python<A1>c1 (PyTuple_GET_ITEM(args_,1 ));
    if (!c1.convertible()) return 0;
    from_python<A2>c2 (PyTuple_GET_ITEM(args_,2 ));
    if (!c2.convertible()) return 0;
    if (!policies->precall(args_)) return 0;
    ((c0(PyTuple_GET_ITEM(args_,0)))->*pmf)( c1 (PyTuple_GET_ITEM(args_,1 )),c2 (PyTuple_GET_ITEM(args_,2 )) );
    return policies->postcall(args_,detail::none());
}
template<class P,class A0,class A1,class A2,class A3>static PyObject*call( R( A0::*pmf )( A1,A2,A3 ) const volatile,PyObject*args_,PyObject*,P const*policies) 
{
    from_python<A0 const volatile*>c0(PyTuple_GET_ITEM(args_,0));
    if (!c0.convertible()) return 0;
    from_python<A1>c1 (PyTuple_GET_ITEM(args_,1 ));
    if (!c1.convertible()) return 0;
    from_python<A2>c2 (PyTuple_GET_ITEM(args_,2 ));
    if (!c2.convertible()) return 0;
    from_python<A3>c3 (PyTuple_GET_ITEM(args_,3 ));
    if (!c3.convertible()) return 0;
    if (!policies->precall(args_)) return 0;
    ((c0(PyTuple_GET_ITEM(args_,0)))->*pmf)( c1 (PyTuple_GET_ITEM(args_,1 )),c2 (PyTuple_GET_ITEM(args_,2 )),c3 (PyTuple_GET_ITEM(args_,3 )) );
    return policies->postcall(args_,detail::none());
}
template<class P,class A0,class A1,class A2,class A3,class A4>static PyObject*call( R( A0::*pmf )( A1,A2,A3,A4 ) const volatile,PyObject*args_,PyObject*,P const*policies) 
{
    from_python<A0 const volatile*>c0(PyTuple_GET_ITEM(args_,0));
    if (!c0.convertible()) return 0;
    from_python<A1>c1 (PyTuple_GET_ITEM(args_,1 ));
    if (!c1.convertible()) return 0;
    from_python<A2>c2 (PyTuple_GET_ITEM(args_,2 ));
    if (!c2.convertible()) return 0;
    from_python<A3>c3 (PyTuple_GET_ITEM(args_,3 ));
    if (!c3.convertible()) return 0;
    from_python<A4>c4 (PyTuple_GET_ITEM(args_,4 ));
    if (!c4.convertible()) return 0;
    if (!policies->precall(args_)) return 0;
    ((c0(PyTuple_GET_ITEM(args_,0)))->*pmf)( c1 (PyTuple_GET_ITEM(args_,1 )),c2 (PyTuple_GET_ITEM(args_,2 )),c3 (PyTuple_GET_ITEM(args_,3 )),c4 (PyTuple_GET_ITEM(args_,4 )) );
    return policies->postcall(args_,detail::none());
}
template<class P,class A0,class A1,class A2,class A3,class A4,class A5>static PyObject*call( R( A0::*pmf )( A1,A2,A3,A4,A5 ) const volatile,PyObject*args_,PyObject*,P const*policies) 
{
    from_python<A0 const volatile*>c0(PyTuple_GET_ITEM(args_,0));
    if (!c0.convertible()) return 0;
    from_python<A1>c1 (PyTuple_GET_ITEM(args_,1 ));
    if (!c1.convertible()) return 0;
    from_python<A2>c2 (PyTuple_GET_ITEM(args_,2 ));
    if (!c2.convertible()) return 0;
    from_python<A3>c3 (PyTuple_GET_ITEM(args_,3 ));
    if (!c3.convertible()) return 0;
    from_python<A4>c4 (PyTuple_GET_ITEM(args_,4 ));
    if (!c4.convertible()) return 0;
    from_python<A5>c5 (PyTuple_GET_ITEM(args_,5 ));
    if (!c5.convertible()) return 0;
    if (!policies->precall(args_)) return 0;
    ((c0(PyTuple_GET_ITEM(args_,0)))->*pmf)( c1 (PyTuple_GET_ITEM(args_,1 )),c2 (PyTuple_GET_ITEM(args_,2 )),c3 (PyTuple_GET_ITEM(args_,3 )),c4 (PyTuple_GET_ITEM(args_,4 )),c5 (PyTuple_GET_ITEM(args_,5 )) );
    return policies->postcall(args_,detail::none());
}
template<class P,class A0,class A1,class A2,class A3,class A4,class A5,class A6>static PyObject*call( R( A0::*pmf )( A1,A2,A3,A4,A5,A6 ) const volatile,PyObject*args_,PyObject*,P const*policies) 
{
    from_python<A0 const volatile*>c0(PyTuple_GET_ITEM(args_,0));
    if (!c0.convertible()) return 0;
    from_python<A1>c1 (PyTuple_GET_ITEM(args_,1 ));
    if (!c1.convertible()) return 0;
    from_python<A2>c2 (PyTuple_GET_ITEM(args_,2 ));
    if (!c2.convertible()) return 0;
    from_python<A3>c3 (PyTuple_GET_ITEM(args_,3 ));
    if (!c3.convertible()) return 0;
    from_python<A4>c4 (PyTuple_GET_ITEM(args_,4 ));
    if (!c4.convertible()) return 0;
    from_python<A5>c5 (PyTuple_GET_ITEM(args_,5 ));
    if (!c5.convertible()) return 0;
    from_python<A6>c6 (PyTuple_GET_ITEM(args_,6 ));
    if (!c6.convertible()) return 0;
    if (!policies->precall(args_)) return 0;
    ((c0(PyTuple_GET_ITEM(args_,0)))->*pmf)( c1 (PyTuple_GET_ITEM(args_,1 )),c2 (PyTuple_GET_ITEM(args_,2 )),c3 (PyTuple_GET_ITEM(args_,3 )),c4 (PyTuple_GET_ITEM(args_,4 )),c5 (PyTuple_GET_ITEM(args_,5 )),c6 (PyTuple_GET_ITEM(args_,6 )) );
    return policies->postcall(args_,detail::none());
}
template<class P,class A0,class A1,class A2,class A3,class A4,class A5,class A6,class A7>static PyObject*call( R( A0::*pmf )( A1,A2,A3,A4,A5,A6,A7 ) const volatile,PyObject*args_,PyObject*,P const*policies) 
{
    from_python<A0 const volatile*>c0(PyTuple_GET_ITEM(args_,0));
    if (!c0.convertible()) return 0;
    from_python<A1>c1 (PyTuple_GET_ITEM(args_,1 ));
    if (!c1.convertible()) return 0;
    from_python<A2>c2 (PyTuple_GET_ITEM(args_,2 ));
    if (!c2.convertible()) return 0;
    from_python<A3>c3 (PyTuple_GET_ITEM(args_,3 ));
    if (!c3.convertible()) return 0;
    from_python<A4>c4 (PyTuple_GET_ITEM(args_,4 ));
    if (!c4.convertible()) return 0;
    from_python<A5>c5 (PyTuple_GET_ITEM(args_,5 ));
    if (!c5.convertible()) return 0;
    from_python<A6>c6 (PyTuple_GET_ITEM(args_,6 ));
    if (!c6.convertible()) return 0;
    from_python<A7>c7 (PyTuple_GET_ITEM(args_,7 ));
    if (!c7.convertible()) return 0;
    if (!policies->precall(args_)) return 0;
    ((c0(PyTuple_GET_ITEM(args_,0)))->*pmf)( c1 (PyTuple_GET_ITEM(args_,1 )),c2 (PyTuple_GET_ITEM(args_,2 )),c3 (PyTuple_GET_ITEM(args_,3 )),c4 (PyTuple_GET_ITEM(args_,4 )),c5 (PyTuple_GET_ITEM(args_,5 )),c6 (PyTuple_GET_ITEM(args_,6 )),c7 (PyTuple_GET_ITEM(args_,7 )) );
    return policies->postcall(args_,detail::none());
}
template<class P,class A0,class A1,class A2,class A3,class A4,class A5,class A6,class A7,class A8>static PyObject*call( R( A0::*pmf )( A1,A2,A3,A4,A5,A6,A7,A8 ) const volatile,PyObject*args_,PyObject*,P const*policies) 
{
    from_python<A0 const volatile*>c0(PyTuple_GET_ITEM(args_,0));
    if (!c0.convertible()) return 0;
    from_python<A1>c1 (PyTuple_GET_ITEM(args_,1 ));
    if (!c1.convertible()) return 0;
    from_python<A2>c2 (PyTuple_GET_ITEM(args_,2 ));
    if (!c2.convertible()) return 0;
    from_python<A3>c3 (PyTuple_GET_ITEM(args_,3 ));
    if (!c3.convertible()) return 0;
    from_python<A4>c4 (PyTuple_GET_ITEM(args_,4 ));
    if (!c4.convertible()) return 0;
    from_python<A5>c5 (PyTuple_GET_ITEM(args_,5 ));
    if (!c5.convertible()) return 0;
    from_python<A6>c6 (PyTuple_GET_ITEM(args_,6 ));
    if (!c6.convertible()) return 0;
    from_python<A7>c7 (PyTuple_GET_ITEM(args_,7 ));
    if (!c7.convertible()) return 0;
    from_python<A8>c8 (PyTuple_GET_ITEM(args_,8 ));
    if (!c8.convertible()) return 0;
    if (!policies->precall(args_)) return 0;
    ((c0(PyTuple_GET_ITEM(args_,0)))->*pmf)( c1 (PyTuple_GET_ITEM(args_,1 )),c2 (PyTuple_GET_ITEM(args_,2 )),c3 (PyTuple_GET_ITEM(args_,3 )),c4 (PyTuple_GET_ITEM(args_,4 )),c5 (PyTuple_GET_ITEM(args_,5 )),c6 (PyTuple_GET_ITEM(args_,6 )),c7 (PyTuple_GET_ITEM(args_,7 )),c8 (PyTuple_GET_ITEM(args_,8 )) );
    return policies->postcall(args_,detail::none());
}
template<class P,class A0,class A1,class A2,class A3,class A4,class A5,class A6,class A7,class A8,class A9>static PyObject*call( R( A0::*pmf )( A1,A2,A3,A4,A5,A6,A7,A8,A9 ) const volatile,PyObject*args_,PyObject*,P const*policies) 
{
    from_python<A0 const volatile*>c0(PyTuple_GET_ITEM(args_,0));
    if (!c0.convertible()) return 0;
    from_python<A1>c1 (PyTuple_GET_ITEM(args_,1 ));
    if (!c1.convertible()) return 0;
    from_python<A2>c2 (PyTuple_GET_ITEM(args_,2 ));
    if (!c2.convertible()) return 0;
    from_python<A3>c3 (PyTuple_GET_ITEM(args_,3 ));
    if (!c3.convertible()) return 0;
    from_python<A4>c4 (PyTuple_GET_ITEM(args_,4 ));
    if (!c4.convertible()) return 0;
    from_python<A5>c5 (PyTuple_GET_ITEM(args_,5 ));
    if (!c5.convertible()) return 0;
    from_python<A6>c6 (PyTuple_GET_ITEM(args_,6 ));
    if (!c6.convertible()) return 0;
    from_python<A7>c7 (PyTuple_GET_ITEM(args_,7 ));
    if (!c7.convertible()) return 0;
    from_python<A8>c8 (PyTuple_GET_ITEM(args_,8 ));
    if (!c8.convertible()) return 0;
    from_python<A9>c9 (PyTuple_GET_ITEM(args_,9 ));
    if (!c9.convertible()) return 0;
    if (!policies->precall(args_)) return 0;
    ((c0(PyTuple_GET_ITEM(args_,0)))->*pmf)( c1 (PyTuple_GET_ITEM(args_,1 )),c2 (PyTuple_GET_ITEM(args_,2 )),c3 (PyTuple_GET_ITEM(args_,3 )),c4 (PyTuple_GET_ITEM(args_,4 )),c5 (PyTuple_GET_ITEM(args_,5 )),c6 (PyTuple_GET_ITEM(args_,6 )),c7 (PyTuple_GET_ITEM(args_,7 )),c8 (PyTuple_GET_ITEM(args_,8 )),c9 (PyTuple_GET_ITEM(args_,9 )) );
    return policies->postcall(args_,detail::none());
}
 
 

template<class P>static PyObject*call( R(*pf )( ),PyObject*args_,PyObject*,P const*policies) 
{
    (*pf)( );
    return policies->postcall(args_,detail::none());
}
template<class P,class A0>static PyObject*call( R(*pf )( A0 ),PyObject*args_,PyObject*,P const*policies) 
{
    from_python<A0>c0 (PyTuple_GET_ITEM(args_,0 ));
    if (!c0.convertible()) return 0;
    if (!policies->precall(args_)) return 0;
    (*pf)( c0 (PyTuple_GET_ITEM(args_,0 )) );
    return policies->postcall(args_,detail::none());
}
template<class P,class A0,class A1>static PyObject*call( R(*pf )( A0,A1 ),PyObject*args_,PyObject*,P const*policies) 
{
    from_python<A0>c0 (PyTuple_GET_ITEM(args_,0 ));
    if (!c0.convertible()) return 0;
    from_python<A1>c1 (PyTuple_GET_ITEM(args_,1 ));
    if (!c1.convertible()) return 0;
    if (!policies->precall(args_)) return 0;
    (*pf)( c0 (PyTuple_GET_ITEM(args_,0 )),c1 (PyTuple_GET_ITEM(args_,1 )) );
    return policies->postcall(args_,detail::none());
}
template<class P,class A0,class A1,class A2>static PyObject*call( R(*pf )( A0,A1,A2 ),PyObject*args_,PyObject*,P const*policies) 
{
    from_python<A0>c0 (PyTuple_GET_ITEM(args_,0 ));
    if (!c0.convertible()) return 0;
    from_python<A1>c1 (PyTuple_GET_ITEM(args_,1 ));
    if (!c1.convertible()) return 0;
    from_python<A2>c2 (PyTuple_GET_ITEM(args_,2 ));
    if (!c2.convertible()) return 0;
    if (!policies->precall(args_)) return 0;
    (*pf)( c0 (PyTuple_GET_ITEM(args_,0 )),c1 (PyTuple_GET_ITEM(args_,1 )),c2 (PyTuple_GET_ITEM(args_,2 )) );
    return policies->postcall(args_,detail::none());
}
template<class P,class A0,class A1,class A2,class A3>static PyObject*call( R(*pf )( A0,A1,A2,A3 ),PyObject*args_,PyObject*,P const*policies) 
{
    from_python<A0>c0 (PyTuple_GET_ITEM(args_,0 ));
    if (!c0.convertible()) return 0;
    from_python<A1>c1 (PyTuple_GET_ITEM(args_,1 ));
    if (!c1.convertible()) return 0;
    from_python<A2>c2 (PyTuple_GET_ITEM(args_,2 ));
    if (!c2.convertible()) return 0;
    from_python<A3>c3 (PyTuple_GET_ITEM(args_,3 ));
    if (!c3.convertible()) return 0;
    if (!policies->precall(args_)) return 0;
    (*pf)( c0 (PyTuple_GET_ITEM(args_,0 )),c1 (PyTuple_GET_ITEM(args_,1 )),c2 (PyTuple_GET_ITEM(args_,2 )),c3 (PyTuple_GET_ITEM(args_,3 )) );
    return policies->postcall(args_,detail::none());
}
template<class P,class A0,class A1,class A2,class A3,class A4>static PyObject*call( R(*pf )( A0,A1,A2,A3,A4 ),PyObject*args_,PyObject*,P const*policies) 
{
    from_python<A0>c0 (PyTuple_GET_ITEM(args_,0 ));
    if (!c0.convertible()) return 0;
    from_python<A1>c1 (PyTuple_GET_ITEM(args_,1 ));
    if (!c1.convertible()) return 0;
    from_python<A2>c2 (PyTuple_GET_ITEM(args_,2 ));
    if (!c2.convertible()) return 0;
    from_python<A3>c3 (PyTuple_GET_ITEM(args_,3 ));
    if (!c3.convertible()) return 0;
    from_python<A4>c4 (PyTuple_GET_ITEM(args_,4 ));
    if (!c4.convertible()) return 0;
    if (!policies->precall(args_)) return 0;
    (*pf)( c0 (PyTuple_GET_ITEM(args_,0 )),c1 (PyTuple_GET_ITEM(args_,1 )),c2 (PyTuple_GET_ITEM(args_,2 )),c3 (PyTuple_GET_ITEM(args_,3 )),c4 (PyTuple_GET_ITEM(args_,4 )) );
    return policies->postcall(args_,detail::none());
}
template<class P,class A0,class A1,class A2,class A3,class A4,class A5>static PyObject*call( R(*pf )( A0,A1,A2,A3,A4,A5 ),PyObject*args_,PyObject*,P const*policies) 
{
    from_python<A0>c0 (PyTuple_GET_ITEM(args_,0 ));
    if (!c0.convertible()) return 0;
    from_python<A1>c1 (PyTuple_GET_ITEM(args_,1 ));
    if (!c1.convertible()) return 0;
    from_python<A2>c2 (PyTuple_GET_ITEM(args_,2 ));
    if (!c2.convertible()) return 0;
    from_python<A3>c3 (PyTuple_GET_ITEM(args_,3 ));
    if (!c3.convertible()) return 0;
    from_python<A4>c4 (PyTuple_GET_ITEM(args_,4 ));
    if (!c4.convertible()) return 0;
    from_python<A5>c5 (PyTuple_GET_ITEM(args_,5 ));
    if (!c5.convertible()) return 0;
    if (!policies->precall(args_)) return 0;
    (*pf)( c0 (PyTuple_GET_ITEM(args_,0 )),c1 (PyTuple_GET_ITEM(args_,1 )),c2 (PyTuple_GET_ITEM(args_,2 )),c3 (PyTuple_GET_ITEM(args_,3 )),c4 (PyTuple_GET_ITEM(args_,4 )),c5 (PyTuple_GET_ITEM(args_,5 )) );
    return policies->postcall(args_,detail::none());
}
template<class P,class A0,class A1,class A2,class A3,class A4,class A5,class A6>static PyObject*call( R(*pf )( A0,A1,A2,A3,A4,A5,A6 ),PyObject*args_,PyObject*,P const*policies) 
{
    from_python<A0>c0 (PyTuple_GET_ITEM(args_,0 ));
    if (!c0.convertible()) return 0;
    from_python<A1>c1 (PyTuple_GET_ITEM(args_,1 ));
    if (!c1.convertible()) return 0;
    from_python<A2>c2 (PyTuple_GET_ITEM(args_,2 ));
    if (!c2.convertible()) return 0;
    from_python<A3>c3 (PyTuple_GET_ITEM(args_,3 ));
    if (!c3.convertible()) return 0;
    from_python<A4>c4 (PyTuple_GET_ITEM(args_,4 ));
    if (!c4.convertible()) return 0;
    from_python<A5>c5 (PyTuple_GET_ITEM(args_,5 ));
    if (!c5.convertible()) return 0;
    from_python<A6>c6 (PyTuple_GET_ITEM(args_,6 ));
    if (!c6.convertible()) return 0;
    if (!policies->precall(args_)) return 0;
    (*pf)( c0 (PyTuple_GET_ITEM(args_,0 )),c1 (PyTuple_GET_ITEM(args_,1 )),c2 (PyTuple_GET_ITEM(args_,2 )),c3 (PyTuple_GET_ITEM(args_,3 )),c4 (PyTuple_GET_ITEM(args_,4 )),c5 (PyTuple_GET_ITEM(args_,5 )),c6 (PyTuple_GET_ITEM(args_,6 )) );
    return policies->postcall(args_,detail::none());
}
template<class P,class A0,class A1,class A2,class A3,class A4,class A5,class A6,class A7>static PyObject*call( R(*pf )( A0,A1,A2,A3,A4,A5,A6,A7 ),PyObject*args_,PyObject*,P const*policies) 
{
    from_python<A0>c0 (PyTuple_GET_ITEM(args_,0 ));
    if (!c0.convertible()) return 0;
    from_python<A1>c1 (PyTuple_GET_ITEM(args_,1 ));
    if (!c1.convertible()) return 0;
    from_python<A2>c2 (PyTuple_GET_ITEM(args_,2 ));
    if (!c2.convertible()) return 0;
    from_python<A3>c3 (PyTuple_GET_ITEM(args_,3 ));
    if (!c3.convertible()) return 0;
    from_python<A4>c4 (PyTuple_GET_ITEM(args_,4 ));
    if (!c4.convertible()) return 0;
    from_python<A5>c5 (PyTuple_GET_ITEM(args_,5 ));
    if (!c5.convertible()) return 0;
    from_python<A6>c6 (PyTuple_GET_ITEM(args_,6 ));
    if (!c6.convertible()) return 0;
    from_python<A7>c7 (PyTuple_GET_ITEM(args_,7 ));
    if (!c7.convertible()) return 0;
    if (!policies->precall(args_)) return 0;
    (*pf)( c0 (PyTuple_GET_ITEM(args_,0 )),c1 (PyTuple_GET_ITEM(args_,1 )),c2 (PyTuple_GET_ITEM(args_,2 )),c3 (PyTuple_GET_ITEM(args_,3 )),c4 (PyTuple_GET_ITEM(args_,4 )),c5 (PyTuple_GET_ITEM(args_,5 )),c6 (PyTuple_GET_ITEM(args_,6 )),c7 (PyTuple_GET_ITEM(args_,7 )) );
    return policies->postcall(args_,detail::none());
}
template<class P,class A0,class A1,class A2,class A3,class A4,class A5,class A6,class A7,class A8>static PyObject*call( R(*pf )( A0,A1,A2,A3,A4,A5,A6,A7,A8 ),PyObject*args_,PyObject*,P const*policies) 
{
    from_python<A0>c0 (PyTuple_GET_ITEM(args_,0 ));
    if (!c0.convertible()) return 0;
    from_python<A1>c1 (PyTuple_GET_ITEM(args_,1 ));
    if (!c1.convertible()) return 0;
    from_python<A2>c2 (PyTuple_GET_ITEM(args_,2 ));
    if (!c2.convertible()) return 0;
    from_python<A3>c3 (PyTuple_GET_ITEM(args_,3 ));
    if (!c3.convertible()) return 0;
    from_python<A4>c4 (PyTuple_GET_ITEM(args_,4 ));
    if (!c4.convertible()) return 0;
    from_python<A5>c5 (PyTuple_GET_ITEM(args_,5 ));
    if (!c5.convertible()) return 0;
    from_python<A6>c6 (PyTuple_GET_ITEM(args_,6 ));
    if (!c6.convertible()) return 0;
    from_python<A7>c7 (PyTuple_GET_ITEM(args_,7 ));
    if (!c7.convertible()) return 0;
    from_python<A8>c8 (PyTuple_GET_ITEM(args_,8 ));
    if (!c8.convertible()) return 0;
    if (!policies->precall(args_)) return 0;
    (*pf)( c0 (PyTuple_GET_ITEM(args_,0 )),c1 (PyTuple_GET_ITEM(args_,1 )),c2 (PyTuple_GET_ITEM(args_,2 )),c3 (PyTuple_GET_ITEM(args_,3 )),c4 (PyTuple_GET_ITEM(args_,4 )),c5 (PyTuple_GET_ITEM(args_,5 )),c6 (PyTuple_GET_ITEM(args_,6 )),c7 (PyTuple_GET_ITEM(args_,7 )),c8 (PyTuple_GET_ITEM(args_,8 )) );
    return policies->postcall(args_,detail::none());
}
 
#endif//RETURNING_VOID_DWA2002410_HPP
