//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TTACoreStatusViewEvent_h
#define TTACoreStatusViewEvent_h
@import Foundation;

@class NSDictionary, NSMutableDictionary, NSObject, NSString, NSValue, UIView;
@protocol TTACoreBasicStatusView;

@interface TTACoreStatusViewEvent : NSObject {
    /* instance variables */
    NSValue *_frameValue;
}

@property (retain, nonatomic) NSMutableDictionary *innerState;
@property (readonly, nonatomic) NSString *type;
@property (readonly, nonatomic) UIView<TTACoreBasicStatusView> *statusView;
@property (readonly, nonatomic) NSDictionary *state;
@property (nonatomic) double photoVideoForwardViewCornerRadius;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } frame;
@property (retain, nonatomic) UIView *sourceView;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } sourceViewRect;

/* instance methods */
- (id)initWithEventType:(id)type statusView:(id)view sourceView:(id)view;
- (void)setStateValue:(id)value forKey:(id)key;

@end

#endif /* TTACoreStatusViewEvent_h */
