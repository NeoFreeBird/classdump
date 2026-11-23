//
#ifndef GADBrowserView_h
#define GADBrowserView_h
@import Foundation;

#include "GADBrowserFooterView.h"
#include "GADBrowserHeaderView.h"

@class UIView;

@interface GADBrowserView : UIView

@property (readonly, nonatomic) float progressBarValue;
@property (readonly, nonatomic) GADBrowserHeaderView *headerView;
@property (readonly, nonatomic) GADBrowserFooterView *footerView;

/* instance methods */
- (id)initWithWebView:(id)view;

@end

#endif /* GADBrowserView_h */
