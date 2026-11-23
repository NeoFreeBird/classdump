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
