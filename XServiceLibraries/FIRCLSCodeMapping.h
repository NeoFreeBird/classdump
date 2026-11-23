//
#ifndef FIRCLSCodeMapping_h
#define FIRCLSCodeMapping_h
@import Foundation;

@class NSObject, NSString, NSURL;

@interface FIRCLSCodeMapping : NSObject

@property (readonly, copy, nonatomic) NSURL *URL;
@property (nonatomic) int source;
@property (readonly, copy, nonatomic) NSString *sourceName;

/* class methods */
+ (id)mappingWithURL:(id)url;

/* instance methods */
- (id)initWithURL:(id)url;

@end

#endif /* FIRCLSCodeMapping_h */
