//
#ifndef OCFComponentFactory_Protocol_h
#define OCFComponentFactory_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol OCFComponentFactory <NSObject>

@required

/* class methods */
+ (id)componentWithJSONDictionary:(id)jsondictionary error:(id *)error;

@optional

@end

#endif /* OCFComponentFactory_Protocol_h */
