//
#ifndef GADOMIDDevice_h
#define GADOMIDDevice_h
@import Foundation;

@class NSObject;

@interface GADOMIDDevice : NSObject

/* class methods */
+ (id)deviceDictionary;
+ (id)deviceType;
+ (id)deviceOs;
+ (id)deviceOsVersion;
+ (id)toJSON;

@end

#endif /* GADOMIDDevice_h */
