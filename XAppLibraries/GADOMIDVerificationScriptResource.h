//
#ifndef GADOMIDVerificationScriptResource_h
#define GADOMIDVerificationScriptResource_h
@import Foundation;

@class NSObject, NSString, NSURL;

@interface GADOMIDVerificationScriptResource : NSObject

@property (readonly, nonatomic) NSURL *URL;
@property (readonly, nonatomic) NSString *vendorKey;
@property (readonly, nonatomic) NSString *parameters;

/* instance methods */
- (id)initWithURL:(id)url vendorKey:(id)key parameters:(id)parameters;
- (id)initWithURL:(id)url;

@end

#endif /* GADOMIDVerificationScriptResource_h */
