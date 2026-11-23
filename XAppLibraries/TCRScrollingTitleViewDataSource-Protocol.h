//
#ifndef TCRScrollingTitleViewDataSource_Protocol_h
#define TCRScrollingTitleViewDataSource_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TCRScrollingTitleViewDataSource <NSObject>

@required

/* required instance methods */
- (id)titleView:(id)view titleTupleAtIndex:(long long)index;
- (long long)numberOfTitlesForTitleView:(id)view;
- (id)navigationBarForTitleView:(id)view;
- (double)scalingFactorForTitleView:(id)view;

@optional

@end

#endif /* TCRScrollingTitleViewDataSource_Protocol_h */
