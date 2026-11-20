//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef GADOMIDCommand_h
#define GADOMIDCommand_h
@import Foundation;

@class NSObject;

@interface GADOMIDCommand : NSObject

/* class methods */
+ (id)commandWithName:(id)name;
+ (id)errorCommandWithType:(unsigned long long)type errorMessage:(id)message adSessionId:(id)id;
+ (id)stringWithQuotesFromString:(id)string;
+ (id)escapedString:(id)string;
+ (id)stringFromArguments:(char *)arguments;
+ (id)getStringError:(unsigned long long)error;

@end

#endif /* GADOMIDCommand_h */
