//
#ifndef TUCBrowserDestinationData_Protocol_h
#define TUCBrowserDestinationData_Protocol_h
@import Foundation;

@class NSString, NSURL;

@protocol TUCBrowserDestinationData

@required

@property (nonatomic, readonly) NSString *vanityURLString;
@property (nonatomic, readonly) NSURL *url;
@property (nonatomic, readonly) _Bool isBrowserFallbackEnabled;
@property (nonatomic, readonly) _Bool isUniversalLinkAllowed;

@optional

@end

#endif /* TUCBrowserDestinationData_Protocol_h */
