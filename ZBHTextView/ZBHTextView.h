//
//  ZBHTextView.h
//  BaiSi
//
//  Created by xiaohuge on 16/1/22.
//  Copyright © 2016年 xiaohuge. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ZBHTextView : UITextView
/** 占位文字 */
@property(nonatomic, copy) NSString *placeholder;
/** 占位文字颜色 */
@property(nonatomic, strong) UIColor *placeholderColor;

@end
