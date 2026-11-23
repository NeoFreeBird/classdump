//
#ifndef TFSEnvironment_h
#define TFSEnvironment_h
@import Foundation;

@class NSObject;

@interface TFSEnvironment : NSObject

/* class methods */
+ (_Bool)boolValueForVariableName:(const char *)name;
+ (id)stringValueForVariableName:(const char *)name;
+ (id)arrayValueForVariableName:(const char *)name;
+ (_Bool)isActivePrewarm;

@end

#endif /* TFSEnvironment_h */
