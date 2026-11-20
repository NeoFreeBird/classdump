//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFNDataSourceScrollPositionAssociation_Protocol_h
#define TFNDataSourceScrollPositionAssociation_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TFNDataSourceScrollPositionAssociation <NSObject>

@required

/* required instance methods */
- (id)indexPathForElementWithScrollPositionIdentifier:(id)identifier inView:(id)view;
- (id)indexPathForElementWithScrollPositionIdentifier:(id)identifier inView:(id)view;
- (id)scrollPositionIdentifierForElementAtIndexPath:(id)path inView:(id)view;
- (id)scrollPositionIdentifierForElementAtIndexPath:(id)path inView:(id)view;

@optional

@end

#endif /* TFNDataSourceScrollPositionAssociation_Protocol_h */
