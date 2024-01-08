/******************************************************************************
 * @file    module.h
 * @brief   A brief description of the module.
 * @details A more detailed description of the module.
 * @author  Author
 * @version 1.0.0
 * @date    20XX-XX-XX
 * @note
 *
 * @copyright MIT License
 * THE SOFTWARE IS PROVIDED “AS IS”, WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS
 * IN THE SOFTWARE.
 *****************************************************************************/

/******************************************************************************
 * REVISION HISTORY
 *
 * Date         Version     Author          Description
 * 20XX-XX-XX   1.0.0       Author          Initial release.
 *
 *****************************************************************************/

/** @todo Update name below as well as comment for corresponding endif **/
#ifndef PROJECT_MODULE_H_
#define PROJECT_MODULE_H_

/*** INCLUDES ****************************************************************/
#include <stdint.h> /* Required for portable types. */

/*** PREPROCESSOR CONSTANTS **************************************************/

/*** CONFIGURATION CONSTANTS *************************************************/

/*** MACROS ******************************************************************/

/*** TYPEDEFS ****************************************************************/

/*** PROTOTYPES **************************************************************/
#ifdef __cplusplus
extern "C" {
#endif

/**
 * @brief Example function.
 *
 * @details This function is used as an example for documentation purposes.
 *          This can be a longer paragraph.
 *
 * @note Function documentation comments should be with the function prototype,
 *       and not with the function definition.
 *
 * @param param1 Description, explanation, and reasoning of param1.
 * @param param2 Description, explanation, and reasoning of param2.
 *
 * @return Description, explanation, and reasoning of the returned value.
 */
uint32_t foo(uint32_t param1, uint32_t param2);

#ifdef __cplusplus
}  // extern "C"
#endif

#endif /* PROJECT_MODULE_H_ */
