//
#ifndef BRZUserAttributionData_h
#define BRZUserAttributionData_h
@import Foundation;

@class /usr/local/jenkins/workspace/twitter-ios-build/Frameworks/XAppLibraries/AVChat/Sources/AVChat/AVChatUtils.swift, NSObject, NSString;

@interface BRZUserAttributionData : NSObject { // (Swift)
    /* instance variables */
    /usr/local/jenkins/workspace/twitter-ios-build/Frameworks/XAppLibraries/AVChat/Sources/AVChat/AVChatUtils.swift attributionData;
}

@property (nonatomic, readonly) NSString *network;
@property (nonatomic, readonly) NSString *campaign;
@property (nonatomic, readonly) NSString *adGroup;
@property (nonatomic, readonly) NSString *creative;

/* instance methods */
- (id)initWithNetwork:(id)network campaign:(id)campaign adGroup:(id)group creative:(id)creative;
- (id)init;

@end

#endif /* BRZUserAttributionData_h */
