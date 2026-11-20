//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC13XDesignSystemP33_631EC8552601966EE0C6AD884683246429CalendarStableHeightContainer_h
#define _TtC13XDesignSystemP33_631EC8552601966EE0C6AD884683246429CalendarStableHeightContainer_h
@import Foundation;

@class UIView;

@interface XDesignSystem.(CalendarStableHeightContainer in _631EC8552601966EE0C6AD8846832464) : UIView { // (Swift)
    /* instance variables */
    B24@0:8@"NSString"16 onFittingHeightIncrease;
    B24@0:8@"NSString"16 calendarView;
    B24@0:8@"NSString"16 measuredWidth;
    B24@0:8@"NSString"16 maxFittingHeight;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC13XDesignSystemP33_631EC8552601966EE0C6AD884683246429CalendarStableHeightContainer_h */
