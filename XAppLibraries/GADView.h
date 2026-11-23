//
#ifndef GADView_h
#define GADView_h
@import Foundation;

#include "GADEventContext.h"
#include "GADEventContextSource-Protocol.h"

@class NSString, UIView;

@interface GADView : UIView <GADEventContextSource> {
    /* instance variables */
    struct CGSize { double width; double height; } _lastSize;
}

@property (readonly, nonatomic) GADEventContext *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame context:(id)context;
- (void)dealloc;
- (void)awakeFromNib;
- (void)didMoveToWindow;
- (void)layoutSubviews;

@end

#endif /* GADView_h */
