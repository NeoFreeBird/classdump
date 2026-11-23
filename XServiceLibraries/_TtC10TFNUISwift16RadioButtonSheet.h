//
#ifndef _TtC10TFNUISwift16RadioButtonSheet_h
#define _TtC10TFNUISwift16RadioButtonSheet_h
@import Foundation;

@class NSObject, _$sSo25TFNMenuSheetConfigurationC;

@interface TFNUISwift.RadioButtonSheet : NSObject { // (Swift)
    /* instance variables */
    __C.TFNMenuSheetConfiguration configuration;
}

/* instance methods */
- (id)initWithTitle:(id)title;
- (void)addOptionWithTitle:(id)title imageName:(id)name selected:(_Bool)selected onSelection:(id /* block */)selection;
- (void)addOptionWithTitle:(id)title subtitle:(id)subtitle imageName:(id)name selected:(_Bool)selected onSelection:(id /* block */)selection;
- (void)addHeaderWithTitle:(id)title;
- (void)addSwitchWithTitle:(id)title selected:(_Bool)selected onSelection:(id /* block */)selection;
- (void)addDetailsOptionWithTitle:(id)title details:(id)details onSelection:(id /* block */)selection;
- (void)presentFrom:(id)from onDismiss:(id /* block */)dismiss completion:(id /* block */)completion;
- (id)init;

@end

#endif /* _TtC10TFNUISwift16RadioButtonSheet_h */
