//
#ifndef ImagineURLParams_h
#define ImagineURLParams_h
@import Foundation;

@class NSObject, NSString;

@interface ImagineURLParams : NSObject

@property (nonatomic) long long action;
@property (copy, nonatomic) NSString *parentXPostID;
@property (copy, nonatomic) NSString *imaginePostID;
@property (copy, nonatomic) NSString *musicOverlayID;
@property (copy, nonatomic) NSString *captionPreset;
@property (copy, nonatomic) NSString *text;

/* instance methods */

@end

#endif /* ImagineURLParams_h */
