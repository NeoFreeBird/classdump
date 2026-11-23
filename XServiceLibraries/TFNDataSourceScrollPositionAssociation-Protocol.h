//
#ifndef TFNDataSourceScrollPositionAssociation_Protocol_h
#define TFNDataSourceScrollPositionAssociation_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TFNDataSourceScrollPositionAssociation <NSObject>

@required

/* required instance methods */
- (id)indexPathForElementWithScrollPositionIdentifier:(id)identifier inView:(id)view;
- (id)scrollPositionIdentifierForElementAtIndexPath:(id)path inView:(id)view;

@optional

@end

#endif /* TFNDataSourceScrollPositionAssociation_Protocol_h */
