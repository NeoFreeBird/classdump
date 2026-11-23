//
#ifndef TUICardViewDelegate_Protocol_h
#define TUICardViewDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TUICardViewDelegate <NSObject>

@required

/* required instance methods */
- (id)layoutMetricsForCardView:(id)view;
- (id)layoutMetricsForCardView:(id)view;
- (id)cardView:(id)view didFireViewEvent:(id)event;
- (id)cardView:(id)view didFireViewEvent:(id)event;

@optional

/* optional instance methods */
- (void)cardView:(id)view didUpdateContentAnimated:(_Bool)animated;
- (void)cardView:(id)view presentFullscreenPlayerFromMediaView:(id)view withPreviewImage:(id)image;
- (void)composerCardView:(id)view updateAccessibilityLabel:(id)label;

@end

#endif /* TUICardViewDelegate_Protocol_h */
