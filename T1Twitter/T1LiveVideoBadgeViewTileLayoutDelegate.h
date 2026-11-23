//
#ifndef T1LiveVideoBadgeViewTileLayoutDelegate_h
#define T1LiveVideoBadgeViewTileLayoutDelegate_h
@import Foundation;

#include "T1LiveVideoBadgeViewLayoutDelegate-Protocol.h"

@class NSObject, NSString;

@interface T1LiveVideoBadgeViewTileLayoutDelegate : NSObject <T1LiveVideoBadgeViewLayoutDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)sharedInstance;

/* instance methods */
- (id)layoutStateForModel:(id)model theme:(id)theme bounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bounds layoutMetrics:(id)metrics;

@end

#endif /* T1LiveVideoBadgeViewTileLayoutDelegate_h */
