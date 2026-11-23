//
#ifndef _TtC10TFNUISwiftP33_19E25DFCBFA569FDFA3E56F314F9A42420PagingCollectionView_h
#define _TtC10TFNUISwiftP33_19E25DFCBFA569FDFA3E56F314F9A42420PagingCollectionView_h
@import Foundation;

#include "UIGestureRecognizerDelegate-Protocol.h"

@class UICollectionView;

@interface TFNUISwift.(PagingCollectionView in _19E25DFCBFA569FDFA3E56F314F9A424) : UICollectionView <UIGestureRecognizerDelegate> { // (Swift)
    /* instance variables */
    B24@0:8@"NSString"16 pagingController;
    B24@0:8@"NSString"16 scrollViewsUnderTouch;
}

/* instance methods */
- (_Bool)gestureRecognizer:(id)recognizer shouldReceiveTouch:(id)touch;
- (_Bool)gestureRecognizerShouldBegin:(id)begin;
- (_Bool)gestureRecognizer:(id)recognizer shouldRequireFailureOfGestureRecognizer:(id)recognizer;
- (_Bool)gestureRecognizer:(id)recognizer shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)recognizer;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame collectionViewLayout:(id)layout;
- (id)initWithCoder:(id)coder;

@end

#endif /* _TtC10TFNUISwiftP33_19E25DFCBFA569FDFA3E56F314F9A42420PagingCollectionView_h */
