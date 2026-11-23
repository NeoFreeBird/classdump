//
#ifndef T1TabView_Protocol_h
#define T1TabView_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@class NSString;

@protocol T1TabView <NSObject>

@required

@property (copy, nonatomic) NSString *scribePage;

@optional

@end

#endif /* T1TabView_Protocol_h */
