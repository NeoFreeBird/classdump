//
#ifndef _TtC12XPhotoEditor22EditorKeyboardObserver_h
#define _TtC12XPhotoEditor22EditorKeyboardObserver_h
@import Foundation;

@class _TtCs12_SwiftObject, __C.CGRect ?, __C.Name;

@interface XPhotoEditor.EditorKeyboardObserver : Swift._SwiftObject { // (Swift)
    /* instance variables */
    __C.Name keyboardDidChangeNotification;
    __C.CGRect ? keyboardEndFrame;
}

/* instance methods */
- (void)keyboardWillChangeFrame:(id)frame;
- (void)keyboardWillHide:(id)hide;

@end

#endif /* _TtC12XPhotoEditor22EditorKeyboardObserver_h */
