//
//  DCHInputAlertView.h
//  InputAlert
//
//  Created by dolway on 18/5/14.
//  Copyright (c) 2018年 iss. All rights reserved.
//

#import <UIKit/UIKit.h>

/** 确认按钮回调的block */
typedef void(^confirmCallback)(NSString *inputString);

@interface DCHInputAlertView : UIView

/** 确认按钮 */
@property (weak, nonatomic) IBOutlet UIButton *confirmBtn;
/** 输入框 */
@property (weak, nonatomic) IBOutlet UITextView *inputTextView;

/** 是否显示蒙版，默认显示 */
@property (nonatomic, assign) BOOL hideBecloud;
/** 圆角半径，默认5.0 */
@property (nonatomic, assign) CGFloat radius;
/** 确认按钮颜色 */
@property (nonatomic, strong) UIColor *confirmBgColor;
/** placeholder */
@property (nonatomic, strong) NSString *placeholder;

/** 类方法创建DCHInputAlertView */
+ (instancetype)alertView;
/** 弹出输入框 */
- (void)show;
/** 移除输入框 */
- (void)dismiss;
/** 点击确认按钮回调 */
- (void)confirmBtnClickBlock:(confirmCallback) block;

@end
