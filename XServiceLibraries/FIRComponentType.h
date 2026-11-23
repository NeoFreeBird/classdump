//
#ifndef FIRComponentType_h
#define FIRComponentType_h
@import Foundation;

@class NSObject;

@interface FIRComponentType : NSObject

/* class methods */
+ (id)instanceForProtocol:(id)protocol inContainer:(id)container;

@end

#endif /* FIRComponentType_h */
