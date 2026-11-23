//
#ifndef TAVAmplifyVMAPPlaylistVideoVariant_h
#define TAVAmplifyVMAPPlaylistVideoVariant_h
@import Foundation;

@class NSNumber, NSObject, NSString, NSURL;

@interface TAVAmplifyVMAPPlaylistVideoVariant : NSObject

@property (readonly, nonatomic) NSURL *URL;
@property (readonly, nonatomic) NSString *contentType;
@property (readonly, nonatomic) NSNumber *bitrate;

/* class methods */
+ (id)variantsWithElements:(id)elements;

/* instance methods */
- (id)initWithURL:(id)url contentType:(id)type bitrate:(id)bitrate;
- (id)initWithElement:(id)element;

@end

#endif /* TAVAmplifyVMAPPlaylistVideoVariant_h */
