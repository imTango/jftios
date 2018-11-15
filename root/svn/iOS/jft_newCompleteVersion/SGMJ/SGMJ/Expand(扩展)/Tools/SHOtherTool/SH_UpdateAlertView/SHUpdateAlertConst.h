//
//  SHUpdateAlertConst.h
//  SGMJ
//
//  Created by 数荟科技 on 2018/4/2.
//  Copyright © 2018年 数荟科技. All rights reserved.
//

#import <UIKit/UIKit.h>

/** RGB */
#define SELColor(r, g, b) [UIColor colorWithRed:(r)/255.0 green:(g)/255.0 blue:(b)/255.0 alpha:1.0]
/** 屏幕高度 */
#define SCREEN_WIDTH [UIScreen mainScreen].bounds.size.width
/** 屏幕高度 */
#define SCREEN_HEIGHT [UIScreen mainScreen].bounds.size.height

//屏幕适配
/**当前设备对应375的比例*/
#define Ratio_375 (SCREEN_WIDTH/375.0)
/**转换成当前比例的数*/
#define Ratio(x) ((int)((x) * Ratio_375))

/** 入场出场动画时间 */
UIKIT_EXTERN const CGFloat SHAnimationTimeInterval;

/** 更新内容显示字体大小 */
UIKIT_EXTERN const CGFloat SHDescriptionFont;

/** 更新内容最大显示高度 */
UIKIT_EXTERN const CGFloat SHMaxDescriptionHeight;











