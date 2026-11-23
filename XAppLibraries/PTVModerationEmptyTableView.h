//
#ifndef PTVModerationEmptyTableView_h
#define PTVModerationEmptyTableView_h
@import Foundation;

#include "PTVTableViewFullScreen-Protocol.h"

@class NSString, UIButton, UIImageView, UILabel, UIView;

@interface PTVModerationEmptyTableView : UIView <PTVTableViewFullScreen> {
    /* instance variables */
    UIImageView *_emptyImage;
    UILabel *_emptyTitleLabel;
    UILabel *_emptyLabel;
}

@property (readonly, nonatomic) UIButton *button;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForFullViewScreenInTableView:(id)view;
- (id)initWithTitle:(id)title subtitle:(id)subtitle buttonText:(id)text buttonRounded:(_Bool)rounded;

@end

#endif /* PTVModerationEmptyTableView_h */
