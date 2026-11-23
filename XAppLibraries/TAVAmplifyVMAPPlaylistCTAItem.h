//
#ifndef TAVAmplifyVMAPPlaylistCTAItem_h
#define TAVAmplifyVMAPPlaylistCTAItem_h
@import Foundation;

@class NSObject, NSString, NSURL;

@interface TAVAmplifyVMAPPlaylistCTAItem : NSObject

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSURL *URL;
@property (readonly, nonatomic) NSString *text;

/* instance methods */
- (id)initWithElement:(id)element;

@end

#endif /* TAVAmplifyVMAPPlaylistCTAItem_h */
