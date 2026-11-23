//
#ifndef TSCShareable_Protocol_h
#define TSCShareable_Protocol_h
@import Foundation;

@class NSNumber, NSString;

@protocol TSCShareable

@required

@property (nonatomic, readonly) NSNumber *scribeParameterID;
@property (nonatomic, readonly) NSString *scribeComponent;
@property (nonatomic, readonly) NSString *scribeElement;
@property (nonatomic, readonly) _Bool isPrivateOrNonCompliant;

@optional

@end

#endif /* TSCShareable_Protocol_h */
