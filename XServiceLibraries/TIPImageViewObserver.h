//
#ifndef TIPImageViewObserver_h
#define TIPImageViewObserver_h
@import Foundation;

#include "TIPImageViewFetchHelper.h"

@class UIView;

@interface TIPImageViewObserver : UIView {
    /* instance variables */
    _Bool _didGetAddedToSuperview;
    _Bool _observingSuperview;
    id _appBackgroundObserver;
    id _appForegroundObserver;
    TIPImageViewFetchHelper *_fetchHelper;
}

/* class methods */
+ (Class)layerClass;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)dealloc;
- (void)setOpaque:(_Bool)opaque;
- (void)setBackgroundColor:(id)color;
- (void)willMoveToWindow:(id)window;
- (void)didMoveToWindow;
- (void)willMoveToSuperview:(id)superview;
- (void)layoutSubviews;
- (id)hitTest:(struct CGPoint { double x0; double x1; })test withEvent:(id)event;
- (void)observeValueForKeyPath:(id)path ofObject:(id)object change:(id)change context:(void *)context;

@end

#endif /* TIPImageViewObserver_h */
