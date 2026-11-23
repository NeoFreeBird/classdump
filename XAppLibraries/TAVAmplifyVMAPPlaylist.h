//
#ifndef TAVAmplifyVMAPPlaylist_h
#define TAVAmplifyVMAPPlaylist_h
@import Foundation;

@class NSArray, NSObject;

@interface TAVAmplifyVMAPPlaylist : NSObject

@property (readonly, nonatomic) NSArray *adVideoItems;
@property (readonly, nonatomic) NSArray *contentVideoItems;

/* class methods */
+ (id)private_trackingEventsWithEventElements:(id)elements;
+ (id)playlistWithXMLData:(id)xmldata error:(id *)error;

/* instance methods */
- (id)initWithContentItems:(id)items adItems:(id)items;
- (_Bool)validateError:(id *)error;

@end

#endif /* TAVAmplifyVMAPPlaylist_h */
