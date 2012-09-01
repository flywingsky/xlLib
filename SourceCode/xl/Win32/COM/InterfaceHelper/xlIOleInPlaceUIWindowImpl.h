//--------------------------------------------------------------------
//
//    Copyright (C) Streamlet. All rights reserved.
//
//    File Name:   xlIOleInPlaceUIWindowImpl.h
//    Author:      Streamlet
//    Create Time: 2012-09-01
//    Description: 
//
//    Version history:
//
//
//--------------------------------------------------------------------

#ifndef __XLIOLEINPLACEUIWINDOWIMPL_H_9707BB77_FD58_471B_B7EE_0BCEAF30618D_INCLUDED__
#define __XLIOLEINPLACEUIWINDOWIMPL_H_9707BB77_FD58_471B_B7EE_0BCEAF30618D_INCLUDED__


#include <oleidl.h>
#include <xl/Win32/COM/xlComDef.h>
#include <xl/Win32/COM/InterfaceHelper/xlIUnknownImpl.h>

namespace xl
{
    template <typename T = IOleInPlaceUIWindow>
    class IOleInPlaceUIWindowImpl : public IOleWindowImpl<T>
    {
    public:
        XL_COM_INTERFACE_BEGIN()
            XL_COM_INTERFACE(IOleInPlaceUIWindow)
            XL_COM_INTERFACE_CHAIN(IOleWindowImpl<T>)
        XL_COM_INTERFACE_END()

    public: // IOleInPlaceUIWindow Methods
        STDMETHOD(GetBorder)(LPRECT lprectBorder)
        {
            return E_NOTIMPL;
        }

        STDMETHOD(RequestBorderSpace)(LPCBORDERWIDTHS pborderwidths)
        {
            return E_NOTIMPL;
        }

        STDMETHOD(SetBorderSpace)(LPCBORDERWIDTHS pborderwidths)
        {
            return E_NOTIMPL;
        }

        STDMETHOD(SetActiveObject)(IOleInPlaceActiveObject *pActiveObject, LPCOLESTR pszObjName)
        {
            return E_NOTIMPL;
        }
    };

} // namespace xl

#endif // #ifndef __XLIOLEINPLACEUIWINDOWIMPL_H_9707BB77_FD58_471B_B7EE_0BCEAF30618D_INCLUDED__