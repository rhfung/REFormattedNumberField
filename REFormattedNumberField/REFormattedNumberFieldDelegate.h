//
//  REFormattedNumberFieldDelegate.h
//  Pods
//
//  Created by Richard H Fung on 10/8/13.
//
//

#import "REFormattedNumberField.h"

@protocol REFormattedNumberFieldDelegate <UITextFieldDelegate>

-(void)textFieldDidEdit:(REFormattedNumberField*)textField;

@end
