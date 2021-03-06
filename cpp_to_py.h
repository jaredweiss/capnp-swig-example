#ifndef __PYX_HAVE__cpp_to_py
#define __PYX_HAVE__cpp_to_py


#ifndef __PYX_HAVE_API__cpp_to_py

#ifndef __PYX_EXTERN_C
  #ifdef __cplusplus
    #define __PYX_EXTERN_C extern "C"
  #else
    #define __PYX_EXTERN_C extern
  #endif
#endif

#ifndef DL_IMPORT
  #define DL_IMPORT(_T) _T
#endif

__PYX_EXTERN_C DL_IMPORT(PyObject) *create_reader( ::capnp::DynamicStruct::Reader, PyObject *);
__PYX_EXTERN_C DL_IMPORT(PyObject) *create_builder( ::capnp::DynamicStruct::Builder, PyObject *);

#endif /* !__PYX_HAVE_API__cpp_to_py */

#if PY_MAJOR_VERSION < 3
PyMODINIT_FUNC initcpp_to_py(void);
#else
PyMODINIT_FUNC PyInit_cpp_to_py(void);
#endif

#endif /* !__PYX_HAVE__cpp_to_py */
