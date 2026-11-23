//
#ifndef TAVAmplifyVMAPPlaylistTrackingEvent_h
#define TAVAmplifyVMAPPlaylistTrackingEvent_h
@import Foundation;

@class NSObject, NSString, NSURL;

@interface TAVAmplifyVMAPPlaylistTrackingEvent : NSObject

@property (readonly, nonatomic) NSString *event;
@property (readonly, nonatomic) NSURL *URL;

/* instance methods */
- (id)initWithEvent:(id)event URL:(id)url;
- (id)description;

@end

#endif /* TAVAmplifyVMAPPlaylistTrackingEvent_h */
