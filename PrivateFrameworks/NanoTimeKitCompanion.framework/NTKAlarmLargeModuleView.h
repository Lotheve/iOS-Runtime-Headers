/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKAlarmLargeModuleView : NTKComplicationModuleView <NTKAlarmComplicationDisplay> {
    NSDate * _alarmDate;
    NTKDigitalTimeLabel * _alarmLabel;
    NTKColoringLabel * _snoozeDurationLabel;
    NTKColoringLabel * _subtitleLabel;
    NTKColoringLabel * _titleLabel;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) <NTKComplicationDisplayObserver> *displayObserver;
@property (readonly) unsigned int hash;
@property (getter=isHighlighted, nonatomic) BOOL highlighted;
@property (nonatomic) BOOL shouldUseTemplateColors;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_layoutContentView;
- (void)_setAlarmDate:(id)arg1;
- (void)_updateAlarmTime;
- (void)_updateSnoozeTime:(double)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setForegroundColor:(id)arg1;
- (void)setSecondaryForegroundColor:(id)arg1;
- (void)setStateActiveWithDate:(id)arg1;
- (void)setStateAllAlarmsOff;
- (void)setStateNoAlarms;
- (void)setStateSnoozingWithDuration:(double)arg1;

@end
