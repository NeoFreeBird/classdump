//
#ifndef T1TabbedAppNavigationDataSource_Protocol_h
#define T1TabbedAppNavigationDataSource_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@class NSArray;

@protocol T1TabbedAppNavigationDataSource <NSObject>

@required

@property (nonatomic, readonly) NSArray *tabContent;

@optional

@end

#endif /* T1TabbedAppNavigationDataSource_Protocol_h */
