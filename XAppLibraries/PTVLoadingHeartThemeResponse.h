//
#ifndef PTVLoadingHeartThemeResponse_h
#define PTVLoadingHeartThemeResponse_h
@import Foundation;

@class NSObject, NSString, UIImage;

@interface PTVLoadingHeartThemeResponse : NSObject

@property (retain, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *fillURLString;
@property (readonly, nonatomic) NSString *borderURLString;
@property (retain, nonatomic) UIImage *fill;
@property (retain, nonatomic) UIImage *border;

/* instance methods */
- (void)unpack:(id)unpack themeName:(id)name;
- (void)unpack:(id)unpack themeName:(id)name traitCollection:(id)collection;

@end

#endif /* PTVLoadingHeartThemeResponse_h */
