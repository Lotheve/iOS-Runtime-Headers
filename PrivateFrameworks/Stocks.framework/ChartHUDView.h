/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
 */

@interface ChartHUDView : UIView {
    float  _barHeight;
    UILabel * _centeredLabel;
    StockChartView * _chartView;
    BOOL  _enabled;
    BOOL  _forceTouchUpdate;
    StockGraphView * _graphView;
    NSMutableSet * _inactiveTouchInfoSet;
    int  _interval;
    UILabel * _leftDateLabel;
    BOOL  _overlayHidden;
    PricePopoverBar * _pricePopoverBar;
    UILabel * _rightDateLabel;
    StocksTapDragGestureRecognizer * _tapDragGesture;
    NSMutableSet * _touchInfoSet;
}

@property (nonatomic) float barHeight;
@property (nonatomic) StockChartView *chartView;
@property (nonatomic) BOOL enabled;
@property (nonatomic, retain) StockGraphView *graphView;
@property (getter=isOverlayHidden, nonatomic) BOOL overlayHidden;

+ (id)_dateRangeSeparatorString;
+ (void)initializeDateFormattersIfNeededForInterval:(int)arg1 withTimeZone:(id)arg2;
+ (id)newHUDLabel;
+ (id)stringForTimeIntervalSince1970:(double)arg1 withInterval:(int)arg2 isDouble:(BOOL)arg3 isLeft:(BOOL)arg4;

- (void).cxx_destruct;
- (void)_showHUD;
- (float)barHeight;
- (id)chartView;
- (BOOL)enabled;
- (id)graphView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)isOverlayHidden;
- (BOOL)isTrackingTouches;
- (void)layoutSubviews;
- (void)resetLocale;
- (void)resizeSelectedClipViewsIfNeeded;
- (void)setBarHeight:(float)arg1;
- (void)setChartView:(id)arg1;
- (void)setEnabled:(BOOL)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setGraphView:(id)arg1;
- (void)setOverlayHidden:(BOOL)arg1;
- (void)setSelectedInterval:(int)arg1 timeZone:(id)arg2;
- (void)setShowingTracking:(BOOL)arg1 withTouchInfo:(id)arg2 animated:(BOOL)arg3;
- (void)tapDragGestureChanged:(id)arg1;

@end